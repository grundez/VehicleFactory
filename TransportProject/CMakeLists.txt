add_executable (TransportProject 
	"main.cpp" "Transport.h"
	"TransportFactory.cpp" "TransportFactory.h" 
	"Automobile.cpp" "Automobile.h"
	"Scooter.cpp" "Scooter.h" "Motorcycle.cpp" "Motorcycle.h" "Autobus.cpp" "Autobus.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET TransportProject PROPERTY CXX_STANDARD 20)
endif()

