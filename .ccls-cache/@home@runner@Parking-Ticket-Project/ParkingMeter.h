// ParkingMeter.h
#ifndef PARKINGMETER_H
#define PARKINGMETER_H

class ParkingMeter {
private:
    int purchasedMinutes;

public:
    ParkingMeter(int minutes) : purchasedMinutes(minutes) {}
    int getPurchasedMinutes() const { return purchasedMinutes; }
};

#endif