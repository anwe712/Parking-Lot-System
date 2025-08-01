#include "Bike.h"

Bike::Bike(std::string regNum) 
    : Vehicle(regNum, VehicleType::BIKE) {}

std::string Bike::getTypeAsString() const {
    return "Bike";
}


