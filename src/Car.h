#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle {
public:
    Car(std::string regNum);
    std::string getTypeAsString() const override;
};

#endif
