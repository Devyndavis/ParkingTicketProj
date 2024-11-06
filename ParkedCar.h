// ParkedCar.h
#ifndef PARKEDCAR_H
#define PARKEDCAR_H

#include <string>
using namespace std;

class ParkedCar {
private:
    string make;
    string model;
    string color;
    string licenseNumber;
    int minutesParked;

public:
    ParkedCar(string mk, string ml, string co, string ln, int mn)
        : make(mk), model(ml), color(co), licenseNumber(ln), minutesParked(mn) {}

    int getMinutesParked() const { return minutesParked; }
    string getMake() const { return make; }
    string getModel() const { return model; }
    string getColor() const { return color; }
    string getLicenseNumber() const { return licenseNumber; }
};

#endif