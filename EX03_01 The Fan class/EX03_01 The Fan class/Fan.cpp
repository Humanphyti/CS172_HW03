#include "Fan.h"

Fan::Fan()
{
	speed = 1;
	on = false;
	radius = 5;
	color = string("White");
}

int Fan::getSpeed()
{
	return speed;
}

void Fan::setSpeed(int speed)
{
	this->speed = speed;
}

bool Fan::isOn()
{
	return on;
}

void Fan::setOn(bool trueOrFalse)
{
	this->on = trueOrFalse;
}

double Fan::getRadius()
{
	return radius;
}

void Fan::setRadius(double radius)
{
	this->radius = radius;
}

string Fan::getColor()
{
	return color;
}

void Fan::setColor(string color)
{
	this->color = color;
}
