
#include "Planes.h"

#include <utility>
Plane::~Plane()=default;
Plane::Plane()=default;
Plane::Plane(int id, std::string name, int capacity, float consumption) {
    setId(id);
    setName(std::move(name));
    setCapacity(capacity);
    setConsumption(consumption);
}
void Plane::setCapacity(int capacity) {
    this->capacity = capacity;
}
void Plane::setId(int id) {
    this->id = id;
}
void Plane::setName(std::string name) {
    this->name = std::move(name);
}
void Plane::setConsumption(float consumption) {
    this->consumption = consumption;
}
int Plane::getId() {
    return this->id;
}
std::string Plane::getName() {
    return this->name;
}
int Plane::getCapacity() {
    return this->capacity;
}
float Plane::getConsumption() {
    return this->consumption;
}





