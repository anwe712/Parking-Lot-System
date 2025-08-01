
#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"

class Truck : public Vehicle {
public:
    Truck(std::string regNum);
    std::string getTypeAsString() const override;
};

#endif // TRUCK_H
