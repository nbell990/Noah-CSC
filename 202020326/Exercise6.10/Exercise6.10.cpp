#include <iostream>


using namespace std;

double sphereVolume(double);

int main() {
	double radius;
	cout << "What is the radius of the sphere? (in meters): ";
	cin >> radius;
	cout << "The volume of the sphere is: " << sphereVolume(radius) << " meters cubed.";

}
double sphereVolume(double radius) {
	double volume;
	volume = 4.0 / 3.0 * 3.14159 * pow(radius, 3);
	return volume;

}
