#ifndef SLOT_H
#define SLOT_H

#include <string>
#include "Vehicle.h"

class Slot {
private:
    std::string slotId;         // Unique ID like "A1", "B2"
    VehicleType typeAllowed;    // Type of vehicle allowed in this slot
    bool isOccupied;            // Occupancy flag
    Vehicle* parkedVehicle;     // Pointer to parked vehicle (if any)

public:
    Slot(const std::string& id, VehicleType typeAllowed);

    std::string getSlotId() const;
    bool getIsOccupied() const;
    VehicleType getTypeAllowed() const;
    Vehicle* getParkedVehicle() const;

    bool parkVehicle(Vehicle* v);     // returns false if vehicle type doesn't match or already occupied
    void removeVehicle();             // clears the slot
};

#endif // SLOT_H
