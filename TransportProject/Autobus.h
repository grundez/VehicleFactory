#pragma once
#include "Transport.h"

class Autobus : public Transport {
public:
	Autobus(size_t capacity, size_t maxVelocity, size_t wheelsCount = 4) :
		Transport("Автобус", capacity, wheelsCount, maxVelocity) {
	}

	void printInfo() const override;
};