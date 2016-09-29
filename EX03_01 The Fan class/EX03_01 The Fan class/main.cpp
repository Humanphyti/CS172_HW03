#include "Fan.h";

int main() {
	Fan fan1;
	int userSpeed;
	bool userOn;
	double userRadius;
	string userColor;
	cout << "What are the first fan's properties?" << endl;
	cout << "What setting is the fan at: ";
	cin >> userSpeed;
	fan1.setSpeed(userSpeed);
	cout << "Is the fan turned on: ";
	cin >> userOn;
	fan1.setOn(userOn);
	cout << "What is the radius of the fan, in inches: ";
	cin >> userRadius;
	fan1.setRadius(userRadius);
	cout << "What color is your fan: ";
	cin >> userColor;
	fan1.setColor(userColor);

	cout << "Your fan is set to " << fan1.getSpeed() << endl;
	cout << " and is in fact " << fan1.isOn() << "." << endl;
	cout << "You are currently in possesion of a " << fan1.getColor() << " fan" << endl;
	cout << " with a radius of " << fan1.getRadius() << " inches." << endl;

}