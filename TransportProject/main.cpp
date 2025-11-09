#include "TransportFactory.h"
#include <memory>
#include <iostream>

int main(int argc, char* argv[]) {
	
	if (argc == 1) {
		std::cout << "Put numbers to get info about vehicles: " << std::endl <<
			"1: Motorcycle\n2: Scooter\n3: Automobile\n4: Autobus" << std::endl <<
			"command reference: TransportProject <vehicle type>";
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