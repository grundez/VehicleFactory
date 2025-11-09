#include "iostream"
#include "Scooter.h"

void Scooter::printInfo() const {
	std::cout << "Transport name: " << getName() << std::endl <<
		"Wheels count: " << getWheelsCount() << std::endl <<
		"Max velocity: " << getMaxVelocity() << "km/h" << std::endl <<
		"Max capacity: " << getCapacity() << std::endl << 
		"Scooter type: " << getType() << std::endl;
}

const std::string Scooter::getType() const
{
	return _isElectric ? "electric" : "default";
}
