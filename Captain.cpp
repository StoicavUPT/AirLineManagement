//
// Created by vlads on 10/2/2025.
//

#include "Captain.h"
Captain::~Captain()=default;
Captain::Captain():Person(){};
Captain::Captain(int yearsOfExp,std::string idNumber, int age, std::string name, std::string surname, std::string address, std::string phoneNumber) :Person(idNumber,age,name,surname,address,phoneNumber){
    setYearsOfExp(yearsOfExp);
}
void Captain::setYearsOfExp(int years) {this->yearsOfExp = years;}
int Captain::getYearsOfExp() {return this->yearsOfExp;}

