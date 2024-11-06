// PoliceOfficer.h
#ifndef POLICEOFFICER_H
#define POLICEOFFICER_H

#include <string>
#include "ParkedCar.h"
#include "ParkingMeter.h"
using namespace std;

// Forward declare ParkingTicket to avoid circular dependency
class ParkingTicket;

class PoliceOfficer {
private:
    string name;
    string badgeNumber;

public:
    PoliceOfficer(string n, string b) : name(n), badgeNumber(b) {}

    string getName() const { return name; }
    string getBadgeNumber() const { return badgeNumber; }

    ParkingTicket* inspectCar(const ParkedCar &car, const ParkingMeter &meter) const;
};

#endif