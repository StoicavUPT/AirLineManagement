//
// Created by vlads on 10/2/2025.
//
#include "Planes.h"
#include "Flight.h"
#include <string>
#include <utility>

Flight::~Flight()=default;
Flight::Flight()=default;
Flight::Flight(Captain captain,Plane plane,int flightNum,Airport departureAirport,Airport arrivalAirport,std::string dateOfDeparture,std::string dateOfArrival) {
    setCaptain(captain);
    setPlane(plane);
    setFlightNum(flightNum);
    setDepartureAirport(departureAirport);
    setArrivalAirport(arrivalAirport);
    setDateOfDeparture(std::move(dateOfDeparture));
    setDateOfArrival(std::move(dateOfArrival));
}
Captain Flight::getCaptain() const {return this->captain;}
void Flight::setCaptain(Captain captain) {this->captain = captain;}
Airport Flight::getArrivalAirport() {return this->arrivalAirport;}
Airport Flight::getDepartureAirport() {return this->departureAirport;}
Plane Flight::getPlane() const {return this->plane;}
int Flight::getFlightNum() const  {return this->flightNum;}
std::string Flight::getDateOfArrival() {return this->dateOfArrival;}
std::string Flight::getDateOfDeparture() {return this->dateOfDeparture;}
void Flight::setArrivalAirport(Airport airport) {this->arrivalAirport=airport;}
void Flight::setDepartureAirport(Airport airport) {this->departureAirport=airport;}
void Flight::setPlane(Plane plane) {this->plane=plane;}
void Flight::setFlightNum(int num) {this->flightNum=num;}
void Flight::setDateOfDeparture(std::string date) {this->dateOfDeparture=std::move(date);}
void Flight::setDateOfArrival(std::string date) {this->dateOfArrival=std::move(date);}




