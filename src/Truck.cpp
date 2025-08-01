#include "Truck.h"

Truck::Truck(std::string regNum) 
    : Vehicle(regNum, VehicleType::TRUCK) {}

std::string Truck::getTypeAsString() const {
    return "Truck";
}
