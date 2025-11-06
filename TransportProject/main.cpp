#include "Automobile.h"
#include "Scooter.h"
#include <iostream>


int main(int argc, char* argv[]) {

	// TODO realize parsing arguments and process them by fabric class to display info

	std::unique_ptr<Transport> someAutomobile = std::make_unique<Automobile>(4, 120, "Ъѓях");
	someAutomobile->printInfo();

	std::unique_ptr<Transport> someScooter = std::make_unique<Scooter>(30);
	someScooter->printInfo();

	return 0;
}