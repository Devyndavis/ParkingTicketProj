// ParkingTicket.cpp
#include <sstream>
#include "ParkingTicket.h"
#include "PoliceOfficer.h"  // Include PoliceOfficer here

ParkingTicket::ParkingTicket(const ParkedCar &c, const ParkingMeter &m, const PoliceOfficer &o)
    : car(c), officer(o) {
    int overMinutes = car.getMinutesParked() - m.getPurchasedMinutes();
    calculateFine(overMinutes);
}

void ParkingTicket::calculateFine(int overMinutes) {
    fine = 25.0; // Base fine for the first hour or part of an hour
    if (overMinutes > 0) { // Only charge if there's an overstay
        // Round up any overage time to the next hour (add 59 to ensure correct rounding)
        fine += 10.0 * ((overMinutes + 59) / 60);  // This will round up overages
    }
}

string ParkingTicket::getTicketDetails() const {
    ostringstream details;
    details << "*** Parking Ticket ***\n"
            << "Officer: " << officer.getName() << ", Badge Number: " << officer.getBadgeNumber() << "\n"
            << "Car: " << car.getMake() << " " << car.getModel() << " " << car.getColor() << "\n"
            << "License: " << car.getLicenseNumber() << "\n"
            << "Fine: $" << fine << "\n";
    return details.str();
}