#pragma once
#include "Transport.h"

class Automobile : public Transport{
private:
	std::string _body; // type/shape of body carcass

public:
	Automobile(size_t capacity, size_t maxVelocity, const std::string& body = "Sedan", size_t wheelsCount = 4) :
	Transport("Automobile", capacity, wheelsCount, maxVelocity), _body(body) {}

	void printInfo() const override;
	const std::string& getBodyType() const;
};