#include <stdint.h>
#include <stdio.h>

#include "driver.h"
#include "Alarm_Actuator.h"
#include "Alarm_monitor.h"
#include "main_Algorithm.h"
#include "Pressure_Sensor.h"

void setup()
{
	/* Initialization of drivers */
	GPIO_INITIALIZATION();
	Alarm_Actuator_init();
	Pressure_Sensor_init();

	/* Set States */
	Alarm_Actuator_State = STATE(alarm_OFF);
	Alarm_monitor_State = STATE(alarm_monitor_OFF);
	main_Algorithm_State = STATE(Low_Pressure);
	Pressure_Sensor_State = STATE(Pressure_Sensor_Reading);
}

int main ()
{
	setup();
	GPIO_INITIALIZATION();
	while (1)
	{
		//Implement your Design 
		Alarm_Actuator_State();
		Alarm_monitor_State();
		main_Algorithm_State();
		Pressure_Sensor_State();
		Delay(10);
	}

}
