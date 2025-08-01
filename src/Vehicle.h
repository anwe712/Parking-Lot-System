#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>

enum class VehicleType {
    CAR,
    BIKE,
    TRUCK
};

class Vehicle {
protected:
    std::string registrationNumber;
    VehicleType type;

public:
    Vehicle(std::string regNum, VehicleType type);
    virtual ~Vehicle() {}

    std::string getRegistrationNumber() const;
    VehicleType getType() const;

    virtual std::string getTypeAsString() const = 0;  // Pure virtual = abstract
};

#endif
