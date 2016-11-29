#include "Arduino.h"
#include <Homie.h>
#include <ESP8266WiFi.h>

class GrowPlan
{
	private:
		HomieSetting<const char*> grow_schedule_json;
  public:
    GrowPlan();
    void loop();
		void setup();
		String read();
		bool refresh();
};
