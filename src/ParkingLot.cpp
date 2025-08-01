#include "ParkingLot.h"
#include <iostream>

ParkingLot::ParkingLot(const std::string& id, int floorsCount, int slotsCountPerFloor)
    : lotId(id), numFloors(floorsCount), slotsPerFloor(slotsCountPerFloor) {

    for (int i = 0; i < numFloors; ++i) {
        std::vector<Slot> floorSlots;
        for (int j = 0; j < slotsPerFloor; ++j) {
            std::string slotId = std::to_string(i + 1) + char('A' + j); // e.g., 1A, 1B
            VehicleType type = (j == 0) ? VehicleType::TRUCK :
                               (j == 1 || j == 2) ? VehicleType::BIKE :
                               VehicleType::CAR;
            floorSlots.emplace_back(slotId, type);
        }
        floors.push_back(floorSlots);
    }
}

std::string ParkingLot::getLotId() const {
    return lotId;
}

Slot* ParkingLot::getNextAvailableSlot(VehicleType type) {
    for (auto& floor : floors) {
        for (auto& slot : floor) {
            if (!slot.getIsOccupied() && slot.getTypeAllowed() == type) {
                return &slot;
            }
        }
    }
    return nullptr;
}

bool ParkingLot::parkVehicle(Vehicle* vehicle, std::string& allocatedSlotId) {
    Slot* slot = getNextAvailableSlot(vehicle->getType());
    if (slot && slot->parkVehicle(vehicle)) {
        allocatedSlotId = slot->getSlotId();
        return true;
    }
    return false;
}

bool ParkingLot::unparkVehicle(const std::string& slotId) {
    for (auto& floor : floors) {
        for (auto& slot : floor) {
            if (slot.getSlotId() == slotId && slot.getIsOccupied()) {
                slot.removeVehicle();
                return true;
            }
        }
    }
    return false;
}

void ParkingLot::displayStatus() const {
    for (int i = 0; i < numFloors; ++i) {
        std::cout << "Floor " << (i + 1) << ": ";
        for (const auto& slot : floors[i]) {
            std::cout << "[" << slot.getSlotId()
                      << (slot.getIsOccupied() ? " X" : " O") << "] ";
        }
        std::cout << std::endl;
    }
}
