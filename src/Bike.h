#ifndef BIKE_H
#define BIKE_H

#include "Vehicle.h"

class Bike : public Vehicle {
public:
    Bike(std::string regNum);
    std::string getTypeAsString() const override;
};

#endif
