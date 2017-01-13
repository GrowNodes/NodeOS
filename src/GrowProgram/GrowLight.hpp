#include <Arduino.h>
#include "ComBus.h"
#include <Homie.h>

#include <constants.h>
#include <Timelib.h>
#include "SensorManager.hpp"
#include "GrowSettings.hpp"
#include "GrowErrors.hpp"
#include "ComBus.h"
class GrowLight
{
	public:
		enum State {
			ON,
			OFF,
			OVERHEAT,
			DISABLED
		};
		GrowLight();
		void setup();
		void loop(GrowErrors grow_errors);
		void setState(State state);
		void sendCurrentState();
  private:
		State _state;
    HomieNode _growLightNode;
};
