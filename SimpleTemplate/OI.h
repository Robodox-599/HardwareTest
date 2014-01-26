#ifndef OI_H
#define OI_H

#include "WPILib.h"
#include "SmartDashboard/SmartDashboard.h"
#include "SmartDashboard/NamedSendable.h"
#include "SmartDashboard/Sendable.h"
#include "SmartDashboard/SendableChooser.h"

class OI
{
	
public:
	OI();	
	~OI();
	
	Joystick *getDriveJoystick();
	bool getDriveJoystickButton(UINT8 button);
	bool getDriveJoystickButtonReleased(UINT8 button);

	Joystick *getManipJoystick();		
	bool getManipJoystickButton(UINT8 button);		
	bool getManipJoystickButtonReleased(UINT8 button);
	
	float getBatteryVoltage();
	
	DriverStation *getDriverStation();
	DriverStationLCD *dsLCD;
	SmartDashboard *dashboard;
	
private:
	Joystick *joyDrive;
	Joystick *joyManip;
	DriverStationEnhancedIO *ds;
	DriverStation *dsSimple;
};
#endif
	
