#pragma once
#include <string>

class Transport {
protected:
	std::string _name;
	size_t _capacity;
	size_t _wheelsCount;
	size_t _maxVelocity;

public:
	Transport(const std::string& name, size_t capacity, size_t wheelsCount, size_t maxVelocity) :
		_name(name), _capacity(capacity), _wheelsCount(wheelsCount), _maxVelocity(maxVelocity) {}

	virtual ~Transport() = default;
	virtual void printInfo() const = 0; // pure virtual function for redifinition in others classes
	
	// inline getters - staying within abstraction class
	const std::string& getName() const { return _name; }
	size_t getCapacity() const { return _capacity; }
	size_t getWheelsCount() const { return _wheelsCount; }
	size_t getMaxVelocity() const { return _maxVelocity; }

};