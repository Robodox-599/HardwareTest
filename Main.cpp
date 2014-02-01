#include "WPILib.h"
#include "OperatorInterface.h"

class Main: public IterativeRobot
{
	OperatorInterface *oi;
	//Compressor *comp599;
	Relay *compRelay; 
	
public:	
	Main()
	{
		oi = new OperatorInterface();
		oi->dashboard->PutString("Stage", "Main");
		
		//comp599 = new Compressor(1, 1); 
		compRelay = new Relay(1, 1);
		//comp599->Start();
	}

	void RobotInit()
	{
		oi->dashboard->PutString("Stage", "RobotInit");

	}

	void DisabledInit()
	{
		oi->dashboard->PutString("Stage", "DisabledInit");

	}
	
	void AutonomousInit()
	{
		oi->dashboard->PutString("Stage", "AutonomousInit");
	
	}
	
	void TeleopInit()
	{
		oi->dashboard->PutString("Stage", "TeleopInit");

	}
	
	void TestInit()
	{
		oi->dashboard->PutString("Stage", "TestInit");

	}
	
	void DisabledPeriodic()
	{
		oi->dashboard->PutString("Stage", "DisabledPeriodic");
	
	}
	
	void AutonomousPeriodic()
	{
		oi->dashboard->PutString("Stage", "AutonomousPeriodic");
	}
	
	void TeleopPeriodic()
	{
		oi->dashboard->PutString("Stage", "TeleopPeriodic");
		//comp599->Start();
		if(oi->getDriveJoystickButton(6))
		{
			//comp599->Start();
			compRelay->
			oi->dashboard->PutString("Relay Toggle: ", "on");
		}
		else if(oi->getDriveJoystickButton(7))
		{
			//comp599->Stop();
			compRelay->Set(Relay::kReverse);
			oi->dashboard->PutString("Relay Toggle: ", "off");
		}
		
		//oi->dashboard->PutBoolean("Compressor Enabled? ", comp599->Enabled());
	}
	
	void TestPeriodic()
	{
		oi->dashboard->PutString("Stage", "TestPeriodic");
	}
	
	
};


START_ROBOT_CLASS(Main);
