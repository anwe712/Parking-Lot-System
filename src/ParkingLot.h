#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include <vector>
#include <string>
#include "Slot.h"

class ParkingLot {
private:
    std::string lotId;
    int numFloors;
    int slotsPerFloor;
    std::vector<std::vector<Slot>> floors; // floors[floorIndex][slotIndex]

public:
    ParkingLot(const std::string& id, int floorsCount, int slotsCountPerFloor);

    std::string getLotId() const;
    Slot* getNextAvailableSlot(VehicleType type);   // Get first empty compatible slot
    bool parkVehicle(Vehicle* vehicle, std::string& allocatedSlotId); // tries to park, returns slot ID if successful
    bool unparkVehicle(const std::string& slotId);  // frees a slot

    void displayStatus() const; // Optional: Display all floors and slot statuses
};

#endif // PARKINGLOT_H
