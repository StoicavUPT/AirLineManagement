//
// Created by vlads on 10/2/2025.
//

#ifndef AIRLINEMANAGEMENT_FLIGHT_H
#define AIRLINEMANAGEMENT_FLIGHT_H
#include <string>

class Flight {
private:
    int planeId;
    int flightNum;// id
    std::string departureAirport;
    std::string arrivalAirport;
    std::string dateOfDeparture;
    std::string dateOfArrival;
public:
    ~Flight();
    Flight();
    Flight(int planeId,int flightNum,std::string departureAirport,std::string arrivalAirport,std::string dateOfDeparture,std::string dateOfArrival);
    void setPlaneId(int id);
    int getPlaneId();
    void setFlightNum(int num);
    int getFlightNum();
    void setDepartureAirport(std::string airport);
    std::string getDepartureAirport();
    void setArrivalAirport(std::string airport);
    std::string getArrivalAirport();
    void setDateOfDeparture(std::string date);
    std::string getDateOfDeparture();
    void setDateOfArrival(std::string date);
    std::string getDateOfArrival();

};


#endif //AIRLINEMANAGEMENT_FLIGHT_H