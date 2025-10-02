//
// Created by vlads on 10/2/2025.
//

#ifndef AIRLINEMANAGEMENT_CAPTAIN_H
#define AIRLINEMANAGEMENT_CAPTAIN_H
#include "Person.h"


class Captain : public Person {
private:
    int yearsOfExp;
public:
    Captain();
    Captain(int yearsOfExp,std::string idNumber,int age,std::string name,std::string surname,std::string address,std::string phoneNumber);
    ~Captain();
    int getYearsOfExp();
    void setYearsOfExp(int years);
};


#endif //AIRLINEMANAGEMENT_CAPTAIN_H