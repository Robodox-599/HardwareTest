#include "OI.h"

OI::OI()
{
	joyDrive = new Joystick(1);
	joyManip = new Joystick(2);
	dsSimple = DriverStation::GetInstance();
	ds = &dsSimple->GetEnhancedIO();
	dsLCD = DriverStationLCD::GetInstance();	
	dashboard->init();
}


OI::~OI()
{
	delete dsLCD;
	delete joyDrive;
	delete joyManip;
	
	dsLCD = NULL;
	joyDrive = NULL;
	joyManip = NULL;	
}

Joystick *OI::getDriveJoystick()
{
    return joyDrive;
}

Joystick *OI::getManipJoystick()
{
    return joyManip;
}

bool OI::getDriveJoystickButton(UINT8 button)
{
	 if(joyDrive->GetRawButton(button))
	 {
		 return true;
	 }
	 else
	 {
		 return false;
	 }
}

bool OI::getManipJoystickButton(UINT8 button)
{
	if( joyManip->GetRawButton(button) == 1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

float OI::getBatteryVoltage()
{
	return DriverStation::GetInstance()->GetBatteryVoltage();
}
