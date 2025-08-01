#include "Ticket.h"
#include <iostream>     // For printTicket
#include <iomanip>      // For time formatting
#include <ctime>

Ticket::Ticket(std::string ticketId, Vehicle* vehicle, const std::string& slotId)
    : ticketId(ticketId), vehicle(vehicle), slotId(slotId) {
    entryTime = std::time(nullptr); // Sets current time as entry time
    exitTime = 0;                   // Initially unset
}

std::string Ticket::getTicketId() const {
    return ticketId;
}

Vehicle* Ticket::getVehicle() const {
    return vehicle;
}

std::string Ticket::getSlotId() const {
    return slotId;
}

time_t Ticket::getEntryTime() const {
    return entryTime;
}

time_t Ticket::getExitTime() const {
    return exitTime;
}

void Ticket::setExitTime(time_t exit) {
    exitTime = exit;
}

void Ticket::printTicket() const {
    std::cout << "==== Parking Ticket ====" << std::endl;
    std::cout << "Ticket ID: " << ticketId << std::endl;
    std::cout << "Vehicle Number: " << vehicle->getRegistrationNumber() << std::endl;
    std::cout << "Vehicle Type: " << vehicle->getTypeAsString() << std::endl;
    std::cout << "Slot ID: " << slotId << std::endl;

    std::cout << "Entry Time: " << std::ctime(&entryTime);

    if (exitTime != 0) {
        std::cout << "Exit Time: " << std::ctime(&exitTime);
    }
    