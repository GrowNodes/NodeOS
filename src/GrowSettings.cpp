#include "GrowSettings.hpp"

// Constructor - creates a GrowSettingsClass
// and initializes the member variables and state
GrowSettingsClass::GrowSettingsClass():
h_aborted("aborted", "True = stop growing"),
h_light_on_at("light_on_at", "light turns on at"),
h_light_off_at("light_off_at", "light turns off at")
// h_timezone_id("timezone_id", "Time zone ex. America/Los_Angeles")
{
  aborted = false;
  light_on_at = DEFAULT_GROW_LIGHT_ON_AT;
  light_off_at = DEFAULT_GROW_LIGHT_OFF_AT;
  // timezone_id = DEFAULT_TIMEZONE_ID;
}

GrowSettingsClass GrowSettings;


void GrowSettingsClass::setup() {
  if (Homie.isConfigured()) {
    aborted = h_aborted.get();
    light_on_at = h_light_on_at.get() ;
    light_off_at = h_light_off_at.get();
  }
}

bool GrowSettingsClass::get_aborted() {
  return aborted;
}

int GrowSettingsClass::get_light_on_at() {
  return light_on_at;
}

int GrowSettingsClass::get_light_off_at() {
  return light_off_at;
}


// const char* GrowSettingsClass::get_timezone_id() {
//   return timezone_id;
// }
