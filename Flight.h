//
// Created by vlads on 10/2/2025.
//

#ifndef AIRLINEMANAGEMENT_FLIGHT_H
#define AIRLINEMANAGEMENT_FLIGHT_H
#include <string>

#include "Airport.h"
#include "Captain.h"
#include "Planes.h"

class Flight {
private:
    Plane plane;
    int flightNum;// id
    Captain captain;
    Airport departureAirport;
    Airport arrivalAirport;
    std::string dateOfDeparture;
    std::string dateOfArrival;
public:
    ~Flight();
    Flight();
    Flight(Captain captain,Plane plane,int flightNum,Airport departureAirport,Airport arrivalAirport,std::string dateOfDeparture,std::string dateOfArrival);
    void setPlane(Plane plane);
    Plane getPlane() const;
    void setFlightNum(int num);
    int getFlightNum() const;
    void setDepartureAirport(Airport airport);
    Airport getDepartureAirport();
    void setArrivalAirport(Airport airport);
    Airport getArrivalAirport();
    void setDateOfDeparture(std::string date);
    std::string getDateOfDeparture();
    void setDateOfArrival(std::string date);
    std::string getDateOfArrival();
    Captain getCaptain() const;
    void setCaptain(Captain captain);
};


#endif //AIRLINEMANAGEMENT_FLIGHT_H