#pragma once
#include <string>
#include <vector>

#include "truck.h"
#include "date.h"
#include "client.h"

using namespace std;

enum type {
    red, green, blue
};

enum state {
    on_queue,onTransit,finished
};

class Service
{
public:
    Service(string origin, string destination, double time, unsigned distance, type type, state state, Date date,Client client);
    ~Service();
    static unsigned int lastId;

    //get methods
    string getOrigin() const;
    string getDestination() const;
    double getTime() const;
    unsigned getDistance() const;
    type getType() const;
    unsigned int getId() const;
    state getState();
    Date getDate();
    Client *getClient();

    //set methods
    void setOrigin(string origin);
    void setDestination(string destination);
    void setTime(double time);
    void setDistance(unsigned distance);
    void setType(type type);
    void setState(state state);
    void setDate(Date date);
    void setClient(Client *client);

    void addTruck(Truck *truck);

private:
    string origin;
    string destination;
    double time;
    unsigned distance;
    type type;
    unsigned int id;
    vector<Truck*> trucks;
    //static unsigned int lastId;
    state state;
    Date initialDate;
    Client *client;


};

unsigned int Service::lastId=0;
