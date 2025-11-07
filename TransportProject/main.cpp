#include "TransportFactory.h"
#include <memory>
#include <iostream>


int main(int argc, char* argv[]) {
	
	// TODO realize parsing arguments and process them by fabric class to display info

	if (argc == 1) {
		std::cout << "Введите числа для получения информации о конкретном транспорте: " << std::endl <<
			"1: Мотоцикл\n2: Самокат\n3: Автомобиль\n4: Автобус" << std::endl <<
			"Шаблон команды: TransportProject <тип транспортного средства>";
		return 0;
	}

	for (size_t i = 1; i < argc; ++i) {
		try {
			std::cout << "Аргумент " << i << "(" << argv[i] << "):" << std::endl;
			int typeIdx = std::stoi(argv[i]);
			auto transportType = static_cast<TransportFactory::TransportType>(typeIdx);
			auto vehicle = TransportFactory::crateTransport(transportType);

			if(vehicle) vehicle->printInfo();
			std::cout << std::endl;
		}
		catch (const std::exception& e) {
			std::cerr << "Ошибка при создании транспорта типа " << argv[i] << ": " << e.what() << std::endl;
		}
	}

	return 0;
}