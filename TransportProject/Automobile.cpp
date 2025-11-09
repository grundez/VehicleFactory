#include "iostream"
#include "Automobile.h"

void Automobile::printInfo() const {
	std::cout << "Transport name: " << getName() << std::endl <<
		"Wheels count: " << getWheelsCount() << std::endl <<
		"Max velocity: " << getMaxVelocity() << "km/h" << std::endl <<
		"Max capacity: " << getCapacity() << std::endl <<
		"Body type: " << getBodyType() << std::endl;
}

const std::string& Automobile::getBodyType() const
{
	return _body;
}
