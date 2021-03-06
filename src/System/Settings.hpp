#pragma once

#include <Arduino.h>
#include <ESP8266WiFi.h>
#include <Homie.h>
#include <constants.h>

class Settings
{
	private:
		// comma seperated dark hours. MUST HAVE TRAILING COMMA
		// ex. 13,14,15,16,
		HomieSetting<const char*>  h_dark_hours;

		// HomieSetting<const char*>  h_timezone_id;
		// const char* timezone_id;

	public:
    Settings();
		void setup();

		bool dark_hours[24];
		bool is_light_on_at(int hour);
		// const char* get_timezone_id();
};
