#include "Slot.h"

Slot::Slot(const std::string& id, VehicleType typeAllowed)
    : slotId(id), typeAllowed(typeAllowed), isOccupied(false), parkedVehicle(nullptr) {}

std::string Slot::getSlotId() const {
    return slotId;
}

bool Slot::getIsOccupied() const {
    return isOccupied;
}

VehicleType Slot::getTypeAllowed() const {
    return typeAllowed;
}

Vehicle* Slot::getParkedVehicle() const {
    return parkedVehicle;
}

bool Slot::parkVehicle(Vehicle* v) {
    if (isOccupied || v->getType() != typeAllowed) {
        return false; // either already taken, or wrong type
    }

    parkedVehicle = v;
    isOccupied = true;
    return true;
}

void Slot::removeVehicle() {
    parkedVehicle = nullptr;
    isOccupied = false;
}
