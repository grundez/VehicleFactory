#include "iostream"
#include "Motorcycle.h"

void Motorcycle::printInfo() const {
	std::cout << "Transport name: " << getName() << std::endl <<
		"Wheels count: " << getWheelsCount() << std::endl <<
		"Max velocity: " << getMaxVelocity() << "km/h" << std::endl <<
		"Max capacity: " << getCapacity() << std::endl;
}
