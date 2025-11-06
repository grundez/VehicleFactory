#include "iostream"
#include "Scooter.h"

void Scooter::printInfo() const {
	std::cout << "Наименования транспорта: " << getName() << std::endl <<
		"Количество колес: " << getWheelsCount() << std::endl <<
		"Максимальная скорость: " << getMaxVelocity() << "км/ч" << std::endl <<
		"Максимальная количество пассажиров: " << getCapacity() << std::endl <<
		"Тип самоката: " << getType() << std::endl;
}

const std::string Scooter::getType() const
{
	return _isElectric ? "электрический" : "обычный";
}
