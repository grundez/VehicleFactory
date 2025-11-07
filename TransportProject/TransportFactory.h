#pragma once
#include <iostream>
#include <memory>
#include "Transport.h"
#include "Automobile.h"
#include "Scooter.h"
#include "Autobus.h"
#include "Motorcycle.h"

class TransportFactory {
public:
	enum class TransportType {
		MOTORCYCLE = 0,
		SCOOTER = 1,
		AUTOMOBILE = 2,
		AUTOBUS = 3
	};

	static std::unique_ptr<Transport> crateTransport(TransportType type);
	
};