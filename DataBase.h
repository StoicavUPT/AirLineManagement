//
// Created by vlads on 10/2/2025.
//

#ifndef AIRLINEMANAGEMENT_DATABASE_H
#define AIRLINEMANAGEMENT_DATABASE_H
#include <vector>
#include "Flight.h"
#include "Planes.h"
#include "Airport.h"
#include "Reservation.h"

class DataBase {
private:
    std::vector<Flight> flights;
    std::vector<Plane> planes;
    std::vector<Airport> airports;
    std::vector<Reservation> reservations;
    std::vector<Captain> captains;


public:
    DataBase();
    ~DataBase();
};


#endif //AIRLINEMANAGEMENT_DATABASE_H