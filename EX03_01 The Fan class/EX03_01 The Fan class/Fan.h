#pragma once
#include <iostream>
#include <string>
using namespace std;

class Fan {
public:
	Fan();

	int getSpeed();

	void setSpeed(int speed);

	bool isOn();

	void setOn(bool trueOrFalse);

	double getRadius();

	void setRadius(double radius);

	string getColor();

	void setColor(string color);

private:
	int speed;
	bool on;
	double radius;
	string color;
};