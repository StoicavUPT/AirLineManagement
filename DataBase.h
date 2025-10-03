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
    DataBase(std::vector<Flight> flights,std::vector<Plane> planes,std::vector<Airport> airports,std::vector<Reservation> reservations,std::vector<Captain> captains);
    void setFlights(std::vector<Flight> flights);
    void setPlanes(std::vector <Plane> planes);
    void setAirports(std::vector<Airport> airports);
    void setReservations(std::vector<Reservation> reservations);
    void setCaptains(std::vector<Captain> captains);
    std::vector<Flight> getFlights();
    std::vector<Plane> getPlanes();
    std::vector<Airport> getAirports();
    std::vector<Reservation> getReservations();
    std::vector<Captain> getCaptains();
};


#endif //AIRLINEMANAGEMENT_DATABASE_H