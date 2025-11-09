#pragma once
#include "Transport.h"

class Motorcycle : public Transport {

public:
	Motorcycle(size_t maxVelocity, size_t capacity = 2, size_t wheelsCount = 2) :
		Transport("Motorcycle", capacity, wheelsCount, maxVelocity) {
	}

	void printInfo() const override;
};