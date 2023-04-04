#pragma once
#ifndef __CAR_H__
#define  __CAR_H__

namespace CAR_CONST
{
	enum
	{
		ID_lEN=20, MAX_SPD=200,FUEL_SETP=2, ACC_STEP=10,BRK_STEP=10
	};
}

class Car
{
private:
	char gamerID[CAR_CONST::ID_lEN];
	int fuelGauge;
	int curSpeed;
public:
	void InitMemebers(const char* ID, int fuel);
	void ShowCarState();
	void Accel();
	void Break();
};

#endif