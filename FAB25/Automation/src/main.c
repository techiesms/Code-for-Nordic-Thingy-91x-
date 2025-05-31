#include <zephyr/kernel.h>
#include <zephyr/device.h>
#include <zephyr/drivers/gpio.h>
#include <zephyr/drivers/sensor.h>
#include <stdio.h>
#include <zephyr/sys/__assert.h>
#include <drivers/bme68x_iaq.h>

#include <zephyr/logging/log.h>
LOG_MODULE_REGISTER(app, CONFIG_APP_LOG_LEVEL);

// RGB LED GPIOs from device tree
static const struct gpio_dt_spec red_led   = GPIO_DT_SPEC_GET(DT_ALIAS(led0), gpios);
static const struct gpio_dt_spec green_led = GPIO_DT_SPEC_GET(DT_ALIAS(led1), gpios);
static const struct gpio_dt_spec blue_led  = GPIO_DT_SPEC_GET(DT_ALIAS(led2), gpios);

enum color_state {
	RED,
	GREEN,
	BLUE,
	YELLOW,
	CYAN,
	MAGENTA,
	WHITE,
	OFF
};

void set_color(enum color_state color) {
	// Turn all LEDs off (HIGH for ACTIVE_LOW logic)
	gpio_pin_set_dt(&red_led, 1);
	gpio_pin_set_dt(&green_led, 1);
	gpio_pin_set_dt(&blue_led, 1);

	switch (color) {
	case RED:
		gpio_pin_set_dt(&red_led, 0);
		break;
	case GREEN:
		gpio_pin_set_dt(&green_led, 0);
		break;
	case BLUE:
		gpio_pin_set_dt(&blue_led, 0);
		break;
	case YELLOW:
		gpio_pin_set_dt(&red_led, 0);
		gpio_pin_set_dt(&green_led, 0);
		break;
	case CYAN:
		gpio_pin_set_dt(&green_led, 0);
		gpio_pin_set_dt(&blue_led, 0);
		break;
	case MAGENTA:
		gpio_pin_set_dt(&red_led, 0);
		gpio_pin_set_dt(&blue_led, 0);
		break;
	case WHITE:
		gpio_pin_set_dt(&red_led, 0);
		gpio_pin_set_dt(&green_led, 0);
		gpio_pin_set_dt(&blue_led, 0);
		break;
	case OFF:
	default:
		// All off (already done above)
		break;
	}
}

int main(void)
{
	const struct device *const dev = DEVICE_DT_GET_ANY(bosch_bme680);

	LOG_INF("App started");

	if (!device_is_ready(dev)) {
		LOG_ERR("Sensor device not ready");
		return 0;
	}

	// Init LEDs
	if (!device_is_ready(red_led.port) || !device_is_ready(green_led.port) || !device_is_ready(blue_led.port)) {
		LOG_ERR("LED device not ready");
		return 0;
	}
	gpio_pin_configure_dt(&red_led, GPIO_OUTPUT_INACTIVE);
	gpio_pin_configure_dt(&green_led, GPIO_OUTPUT_INACTIVE);
	gpio_pin_configure_dt(&blue_led, GPIO_OUTPUT_INACTIVE);

	set_color(OFF); // Ensure all off at start

	while (1) {
		struct sensor_value temp, press, humidity, iaq, co2, voc;

		sensor_sample_fetch(dev);
		sensor_channel_get(dev, SENSOR_CHAN_AMBIENT_TEMP, &temp);
		sensor_channel_get(dev, SENSOR_CHAN_PRESS, &press);
		sensor_channel_get(dev, SENSOR_CHAN_HUMIDITY, &humidity);
		sensor_channel_get(dev, SENSOR_CHAN_IAQ, &iaq);
		sensor_channel_get(dev, SENSOR_CHAN_CO2, &co2);
		sensor_channel_get(dev, SENSOR_CHAN_VOC, &voc);

		LOG_INF("temp: %d.%06d; press: %d.%06d; humidity: %d.%06d; iaq: %d; CO2: %d.%06d; VOC: %d.%06d",
			temp.val1, temp.val2, press.val1, press.val2, humidity.val1, humidity.val2,
			iaq.val1, co2.val1, co2.val2, voc.val1, voc.val2);

		// Temperature and humidity thresholds
		int t = temp.val1;
		int h = humidity.val1;

		if (t >= 30) {
			set_color(BLUE); // Hot
		} else if (t >= 20 && t < 30) {
			set_color(GREEN); // Normal
		} else {
			set_color(RED); // Cold
		}

		// Optional: add humidity-based color override
		// Example: if high humidity, change to magenta
		//if (h > 70) {
		//	set_color(MAGENTA); // High humidity
		//} else if (h < 30) {
		//	set_color(CYAN); // Low humidity
		//}

		k_sleep(K_SECONDS(2));
	}

	return 0;
}
