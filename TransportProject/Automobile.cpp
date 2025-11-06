#include "iostream"
#include "Automobile.h"

void Automobile::printInfo() const {
	std::cout << "Наименования транспорта: " << getName() << std::endl <<
		"Количество колес: " << getWheelsCount() << std::endl <<
		"Максимальная скорость: " << getMaxVelocity() << "км/ч" << std::endl <<
		"Максимальная количество пассажиров: " << getCapacity() << std::endl <<
		"Тип кузова: " << getBodyType() << std::endl;
}

const std::string& Automobile::getBodyType() const
{
	return _body;
}
