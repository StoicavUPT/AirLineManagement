//
// Created by vlads on 10/2/2025.
//

#include "Person.h"
#include <string>


Person::~Person()=default;
Person::Person()=default;
Person::Person(std::string idNumber, int age, std::string name, std::string surname, std::string address, std::string phoneNumber) {
    setIdNumber(idNumber);
    setName(name);
    setSurname(surname);
    setAddress(address);
    setPhoneNumber(phoneNumber);
    setAge(age);
}
void Person::setIdNumber(std::string idNumber) {this->idNumber = idNumber;}
void Person::setName(std::string name) {this->name = name;}
void Person::setSurname(std::string surname) {this->surname = surname;}
void Person::setAge(int age) {this->age = age;}
void Person::setAddress(std::string address) {this->address = address;}
void Person::setPhoneNumber(std::string phoneNumber) {this->phoneNumber = phoneNumber;}
std::string Person::getIdNumber() const {return this->idNumber;}
std::string Person::getName() {return this->name;}
std::string Person::getSurname() {return this->surname;}
int Person::getAge() {return this->age;}
std::string Person::getAddress() {return this->address;}
std::string Person::getPhoneNumber() {return this->phoneNumber;}


