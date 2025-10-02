//
// Created by vlads on 10/2/2025.
//

#include "Reservation.h"
#include <string>
#include <vector>

Reservation::Reservation()=default;
Reservation::~Reservation()=default;
Reservation::Reservation(int id,Person rezOwner,Flight flight) {
    setId(id);
    setRezOwner(rezOwner);
    setFlight(flight);
}
int Reservation::getId() const {
    return id;
}

void Reservation::setId(int id) {
    this->id = id;
}

Person Reservation::getRezOwner() const {
    return rezOwner;
}
void Reservation::setRezOwner(Person rezOwner) {
    this->rezOwner = rezOwner;
}
Flight Reservation::getFlight() const {
    return flight;
}
void Reservation::setFlight(Flight flight) {
    this->flight = flight;
}