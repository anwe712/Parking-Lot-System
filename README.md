# 🚗 Parking Lot System in C++

A modular parking lot simulation system written in C++ using Object-Oriented Design principles.

## 🎯 Features

- Supports multiple vehicle types (Car, Bike, Truck)
- Handles parking/unparking
- Tracks slots using Floor > Slot structure
- Ticketing system with timestamps (future)
<!-- 
## 🧱 Class Diagram (LLD)

[Insert ASCII/Class diagram here] -->

## 🧠 OOP Principles Used

- Inheritance (`Vehicle` → `Car`, `Bike`)
- Abstraction (`Vehicle` is abstract)
- Encapsulation (each class manages its own state)
- SRP & OCP (single responsibility, open-closed)

## 🏁 How to Run

```bash
g++ -o parking main.cpp Vehicle.cpp Slot.cpp Floor.cpp ParkingLot.cpp Ticket.cpp
./parking
