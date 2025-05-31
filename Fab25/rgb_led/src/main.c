#include <zephyr/kernel.h>
#include <zephyr/sys/printk.h>
#include <zephyr/device.h>
#include <zephyr/drivers/gpio.h>

// GPIO spec for RGB LEDs
static const struct gpio_dt_spec red_led = GPIO_DT_SPEC_GET(DT_ALIAS(led0), gpios);
static const struct gpio_dt_spec green_led = GPIO_DT_SPEC_GET(DT_ALIAS(led1), gpios);
static const struct gpio_dt_spec blue_led = GPIO_DT_SPEC_GET(DT_ALIAS(led2), gpios);

// Button spec
static const struct gpio_dt_spec button = GPIO_DT_SPEC_GET(DT_ALIAS(sw0), gpios);

enum color_state {
	RED,
	GREEN,
	BLUE
};

void set_color(enum color_state color) {
	// All off (HIGH for ACTIVE_LOW)
	gpio_pin_set_dt(&red_led, 1);
	gpio_pin_set_dt(&green_led, 1);
	gpio_pin_set_dt(&blue_led, 1);

	switch (color) {
	case RED:
		gpio_pin_set_dt(&red_led, 0);
		printk("Button pressed. New color: LIGHT BLUE\n");
		break;
	case GREEN:
		gpio_pin_set_dt(&green_led, 0);
		printk("Button pressed. New color: GREEN\n");
		break;
	case BLUE:
		gpio_pin_set_dt(&blue_led, 0);
		printk("Button pressed. New color: BLUE\n");
		break;
	}
}

int main(void)
{
	int ret;

	if (!device_is_ready(red_led.port) ||
	    !device_is_ready(green_led.port) ||
	    !device_is_ready(blue_led.port) ||
	    !device_is_ready(button.port)) {
		printk("Error: Device not ready\n");
		return 0;
	}

	gpio_pin_configure_dt(&red_led, GPIO_OUTPUT_INACTIVE);
	gpio_pin_configure_dt(&green_led, GPIO_OUTPUT_INACTIVE);
	gpio_pin_configure_dt(&blue_led, GPIO_OUTPUT_INACTIVE);
	gpio_pin_configure_dt(&button, GPIO_INPUT);

	enum color_state current_color = RED;
	set_color(current_color);

	while (1) {
		// Poll the button
		int val = gpio_pin_get_dt(&button);
		if (val == 0) {  // Active low = pressed
			k_sleep(K_MSEC(200));  // debounce

			// cycle to next color
			current_color = (current_color + 1) % 3;
			set_color(current_color);

			// wait for release to avoid multiple triggers
			while (gpio_pin_get_dt(&button) == 0) {
				k_sleep(K_MSEC(50));
			}
		}
		k_sleep(K_MSEC(50));
	}
}
