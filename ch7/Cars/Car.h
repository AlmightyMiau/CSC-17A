#ifndef CAR_H
#define CAR_H

#include <string>

class Car {
    private:
        int year;
        std::string make;
        int speed;
    public:
        // Constructor
        Car(int y, std::string m);
        int getYear();
        std::string getMake();
        int getSpeed();
        void accelerate();
        void brake();
};

#endif