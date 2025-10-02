//
// Created by vlads on 10/2/2025.
//

#include "Flight.h"
#include <string>
#include <utility>

Flight::~Flight()=default;
Flight::Flight()=default;
Flight::Flight(int planeId,int flightNum,std::string departureAirport,std::string arrivalAirport,std::string dateOfDeparture,std::string dateOfArrival) {
    setPlaneId(planeId);
    setFlightNum(flightNum);
    setDepartureAirport(std::move(departureAirport));
    setArrivalAirport(std::move(arrivalAirport));
}
std::string Flight::getArrivalAirport() {return this->arrivalAirport;}
std::string Flight::getDepartureAirport() {return this->departureAirport;}
int Flight::getPlaneId() {return this->planeId;}
int Flight::getFlightNum() {return this->flightNum;}
void Flight::setArrivalAirport(std::string airport) {this->arrivalAirport=std::move(airport);}
void Flight::setDepartureAirport(std::string airport) {this->departureAirport=std::move(airport);}
void Flight::setPlaneId(int id) {this->planeId=id;}
void Flight::setFlightNum(int num) {this->flightNum=num;}




