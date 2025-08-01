#ifndef TICKET_H
#define TICKET_H

#include <string>
#include <ctime>          // For time_t
#include "Vehicle.h"      // Because ticket is associated with a vehicle

class Ticket {
private:
    std::string ticketId;
    Vehicle* vehicle;         // pointer to avoid slicing
    time_t entryTime;
    time_t exitTime;
    std::string slotId;       // e.g., "B2-05"

public:
    Ticket(std::string ticketId, Vehicle* vehicle, const std::string& slotId);

    // Setters & Getters
    std::string getTicketId() const;
    Vehicle* getVehicle() const;
    std::string getSlotId() const;
    time_t getEntryTime() const;
    time_t getExitTime() const;

    void setExitTime(time_t exit);
    void printTicket() const;     // Optional: helpful for logging or debugging
};

#endif // TICKET_H
