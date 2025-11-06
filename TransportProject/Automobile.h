#pragma once
#include "Transport.h"

class Automobile : public Transport{
private:
	std::string _body; // type/shape of body carcass

public:
	Automobile(size_t capacity, size_t maxVelocity, const std::string& body = "Седан", size_t wheelsCount = 4) :
	Transport("Автомобиль", capacity, wheelsCount, maxVelocity), _body(body) {}

	void printInfo() const override;
	const std::string& getBodyType() const;
};