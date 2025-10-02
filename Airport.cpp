//
// Created by vlads on 10/2/2025.
//

#include "Airport.h"
#include <string>


Airport::Airport()=default;
Airport::Airport(std::string name) {
    setName(std::move(name));
}
Airport::~Airport()=default;
void Airport::setName(std::string name) {
    this->name = std::move(name);
}
std::string Airport::getName() const {
    return this->name;
}


