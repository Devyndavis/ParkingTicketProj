// PoliceOfficer.h
// This class represents a police officer with functions to inspect parked cars and issue tickets.

#ifndef POLICEOFFICER_H
#define POLICEOFFICER_H

#include <string>
#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "ParkingTicket.h"
using namespace std;

class PoliceOfficer {
private:
    string name;
    string badgeNumber;

public:
    // Constructor with default parameters
    PoliceOfficer(string n = "OFFICER", string b = "000000") : name(n), badgeNumber(b) {}

    // Getter functions
    string getName() const { return name; }
    string getBadgeNumber() const { return badgeNumber; }

    // Inspect the car and issue a ticket if overparked
    ParkingTicket* inspectCar(const ParkedCar &car, const ParkingMeter &meter) const {
        if (car.getMinutesParked() > meter.getPurchasedMinutes()) {
            return new ParkingTicket(car, meter, *this);
        }
        return nullptr;
    }
};

#endif