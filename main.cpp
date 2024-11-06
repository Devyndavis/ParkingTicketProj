// main.cpp
#include <iostream>
#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "PoliceOfficer.h"
#include "ParkingTicket.h"
using namespace std;

void testParkingTicket(int purchasedMinutes, int parkedMinutes) {
    ParkedCar car("Toyota", "Corolla", "Blue", "ABC123", parkedMinutes);
    ParkingMeter meter(purchasedMinutes);
    PoliceOfficer officer("John Doe", "12345");

    ParkingTicket *ticket = officer.inspectCar(car, meter);

    cout << "Testing: Purchased Minutes = " << purchasedMinutes << ", Parked Minutes = " << parkedMinutes << endl;
    if (ticket) {
        cout << ticket->getTicketDetails() << endl;
        delete ticket;
    } else {
        cout << "No violation detected.\n" << endl;
    }
}

int main() {
    testParkingTicket(60, 45);   // No ticket
    testParkingTicket(60, 75);   // Ticket with basic fine
    testParkingTicket(60, 130);  // Ticket with extra fine

    return 0;
}
