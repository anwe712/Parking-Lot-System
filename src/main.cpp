#include <iostream>
#include "ParkingLot.h"
#include "Car.h"
#include "Bike.h"
#include "Truck.h"

int main() {
    // Create a parking lot with 2 floors and 5 slots per floor
    ParkingLot lot("PL123", 2, 5);

    std::cout << "=== Parking Lot System Started ===\n\n";

    // Create vehicles
    Car* car1 = new Car("KA-01-HH-1234");
    Bike* bike1 = new Bike("KA-02-HH-9999");
    Truck* truck1 = new Truck("KA-03-HH-7777");

    std::string slotId;

    // Try parking car
    if (lot.parkVehicle(car1, slotId)) {
        std::cout << "Car parked at slot: " << slotId << "\n";
    } else {
        std::cout << "No slot available for car.\n";
    }

    // Try parking bike
    if (lot.parkVehicle(bike1, slotId)) {
        std::cout << "Bike parked at slot: " << slotId << "\n";
    } else {
        std::cout << "No slot available for bike.\n";
    }

    // Try parking truck
    if (lot.parkVehicle(truck1, slotId)) {
        std::cout << "Truck parked at slot: " << slotId << "\n";
    } else {
        std::cout << "No slot available for truck.\n";
    }

    std::cout << "\n--- Current Parking Status ---\n";
    lot.displayStatus();

    // Unpark car (use previous slotId manually or track it)
    std::cout << "\nUnparking slot 1C...\n";
    if (lot.unparkVehicle("1C")) {
        std::cout << "Slot 1C unparked.\n";
    } else {
        std::cout << "Slot 1C is already empty or invalid.\n";
    }

    std::cout << "\n--- Final Parking Status ---\n";
    lot.displayStatus();

    // Clean up
    delete car1;
    delete bike1;
    delete truck1;

    return 0;
}
