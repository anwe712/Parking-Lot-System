#include "Car.h"

Car::Car(std::string regNum) 
    : Vehicle(regNum, VehicleType::CAR) {}

std::string Car::getTypeAsString() const {
    return "Car";
}


