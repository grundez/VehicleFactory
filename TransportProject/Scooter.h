#pragma once
#include "Transport.h"

class Scooter : public Transport {
private:
	bool _isElectric; // type of scooter: electric or default

public:
	Scooter(size_t maxVelocity, size_t capacity = 1, size_t wheelsCount = 2, bool electric = false) :
		Transport("Самокат", capacity, wheelsCount, maxVelocity), _isElectric(electric) {
	}

	void printInfo() const override;
	const std::string getType() const;
};