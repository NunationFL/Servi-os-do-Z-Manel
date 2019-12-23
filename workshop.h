#pragma once
#include <queue>
#include <string>
#include "date.h"
#include "truck.h"
#include "company.h"

class Truck;
class Date;

using namespace std;

enum class car_brand { Mercedes, Man, Ford, Volvo, Iveco, Scania, Volkswagen, Mitsubishi, None}; /// Enum representing the possibile Workshop's specialization

class Workshop {
private:
    string name; /// Workshop's name
    car_brand brand; /// Workshop's brand specialization
    unsigned int unavailability; // Unavailability duration in days
    queue<pair<Truck*, Date*>> waiting_line; // Queue of pointers to Trucks assigned to the given Workshop (ordered by FIFO)
public:
    Workshop(string n, car_brand b, unsigned unavailability);
    Workshop(string n);
    string getName() const;
    car_brand getBrand() const;
    unsigned int getUnavailability() const;
    void setName(string n);
    void setBrand(car_brand b);
    void setUnavailability(unsigned int ua);
};