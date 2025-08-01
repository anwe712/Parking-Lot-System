#ifndef UTILS_H
#define UTILS_H

#include <string>

// VehicleType enum — shared across all vehicles
enum class VehicleType {
    CAR,
    BIKE,
    TRUCK
};

// Optional: Function to convert VehicleType to string
inline std::string vehicleTypeToString(VehicleType type) {
    switch (type) {
        case VehicleType::CAR: return "Car";
        case VehicleType::BIKE: return "Bike";
        case VehicleType::TRUCK: return "Truck";
        default: return "Unknown";
    }
}

#endif // UTILS_H
