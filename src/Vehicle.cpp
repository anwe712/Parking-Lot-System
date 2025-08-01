#include "Vehicle.h"

Vehicle::Vehicle(std::string regNum, VehicleType type) 
    : registrationNumber(regNum), type(type) {}

std::string Vehicle::getRegistrationNumber() const {
    return registrationNumber;
}

VehicleType Vehicle::getType() const {
    return type;
}
