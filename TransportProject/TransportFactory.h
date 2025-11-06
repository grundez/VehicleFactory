#pragma once
#include <iostream>
#include "Transport.h"

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