#include "iostream"
#include "Motorcycle.h"

void Motorcycle::printInfo() const {
	std::cout << "Наименования транспорта: " << getName() << std::endl <<
		"Количество колес: " << getWheelsCount() << std::endl <<
		"Максимальная скорость: " << getMaxVelocity() << "км/ч" << std::endl <<
		"Максимальная количество пассажиров: " << getCapacity() << std::endl;
}
