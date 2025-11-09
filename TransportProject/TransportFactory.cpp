#include "TransportFactory.h"

std::unique_ptr<Transport> TransportFactory::crateTransport(TransportType type)
{
	switch (type) {
		case TransportType::SCOOTER:
			return std::make_unique<Scooter>(30, 1, 2, true);
		case TransportType::MOTORCYCLE:
			return std::make_unique<Motorcycle>(150, 1);
		case TransportType::AUTOMOBILE:
			return std::make_unique<Automobile>(2, 200, "Coupe");
		case TransportType::AUTOBUS:
			return std::make_unique<Autobus>(35, 100);
		default: 
			std::cout << "Unknown vehicle type" << std::endl;
			return nullptr;
	}
}
