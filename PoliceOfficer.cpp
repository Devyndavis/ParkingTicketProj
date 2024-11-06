// PoliceOfficer.cpp
#include "PoliceOfficer.h"
#include "ParkingTicket.h"  // Include ParkingTicket here

ParkingTicket* PoliceOfficer::inspectCar(const ParkedCar &car, const ParkingMeter &meter) const {
    if (car.getMinutesParked() > meter.getPurchasedMinutes()) {
        return new ParkingTicket(car, meter, *this);
    }
    return nullptr;
}