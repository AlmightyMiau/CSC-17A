#include "Car.h"

// Constructor
Car::Car(int y, std::string m) {
    year = y;
    make = m;
    speed = 0;
}

int Car::getYear() {
    return year;
}

std::string Car::getMake() {
    return make;
}

int Car::getSpeed() {
    return speed;
}

void Car::accelerate() {
    speed += 5;
}

void Car::brake() {
    speed -= 5;
    if (speed < 0) {
        speed = 0;
    }
}