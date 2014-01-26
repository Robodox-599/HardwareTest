#include "WPILib.h"
#include "OI.h"

class Main: public IterativeRobot
{
	OI *oi;
	Compressor *comp599;
	
	
public:	
	Main()
	{
		oi = new OI();
		oi->dashboard->PutString("Stage", "Main");
		
		comp599 = new Compressor(1, 1, 1, 1); 
		comp599->Start();
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
		comp599->Start();
		oi->dashboard->PutBoolean("Compressor Enabled? ", comp599->Enabled());
	}
	
	void TestPeriodic()
	{
		oi->dashboard->PutString("Stage", "TestPeriodic");
	}
	
	
};


START_ROBOT_CLASS(Main);
