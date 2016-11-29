// Manages Grow Plan
#include <GrowPlan.hpp>

// Constructor - creates a GrowPlan
// and initializes the member variables and state
GrowPlan::GrowPlan() :
grow_schedule_json("grow_schedule", "JSON representation of the grow plan.")
{
	grow_schedule_json.setDefaultValue("{}").setValidator([] (const char* candidate) {
		if (candidate == NULL) {
			return false;
		}
		return true;
	});
}

void GrowPlan::setup() {
  Serial << "GrowPlan..." << endl;
	Serial << "The grow plan stored in flash is: " << read() << endl;
}

void GrowPlan::loop() {

}

String GrowPlan::read() {
		// Todo Parse JSON and return struct?
		return grow_schedule_json.get();
}

bool GrowPlan::refresh() {
	// Todo
	Serial << "GrowPlan: Failed to refresh.";
	return false;
}
