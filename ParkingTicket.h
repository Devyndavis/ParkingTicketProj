// ParkingTicket.h
#ifndef PARKINGTICKET_H
#define PARKINGTICKET_H

#include <string>
#include "ParkedCar.h"
#include "ParkingMeter.h"
using namespace std;

// Forward declare PoliceOfficer to avoid circular dependency
class PoliceOfficer;

class ParkingTicket {
private:
    ParkedCar car;
    const PoliceOfficer& officer;  // Store a reference to PoliceOfficer instead
    double fine;

    void calculateFine(int overMinutes);

public:
    ParkingTicket(const ParkedCar &c, const ParkingMeter &m, const PoliceOfficer &o);
    string getTicketDetails() const;
};

#endif