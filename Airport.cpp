//
// Created by vlads on 10/2/2025.
//

#include "Airport.h"
#include <string>


Airport::Airport()=default;
Airport::Airport(std::string name,int id) {
    setName(std::move(name));
    setId(id);
}
Airport::~Airport()=default;
void Airport::setName(std::string name) {
    this->name = std::move(name);
}
std::string Airport::getName() const {
    return this->name;
}

int Airport::getId() const {
    return this->id;
}
void Airport::setId(int id) {
    this->id = id;
}
