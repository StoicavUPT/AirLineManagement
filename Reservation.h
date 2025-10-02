//
// Created by vlads on 10/2/2025.
//

#ifndef AIRLINEMANAGEMENT_RESERVATION_H
#define AIRLINEMANAGEMENT_RESERVATION_H
#include <string>
#include <vector>

#include "Flight.h"
#include "Person.h"
class Reservation {
private:
    int id;
    Person rezOwner;
    Flight flight;
public:
    Reservation();
    ~Reservation();
    Reservation(int id,Person rezOwner, Flight flight);
    int getId() const ;
    void setId(int id);
    Person getRezOwner() const;
    void setRezOwner(Person rezOwner);
    Flight getFlight() const;
    void setFlight(Flight flight);

};


#endif //AIRLINEMANAGEMENT_RESERVATION_H