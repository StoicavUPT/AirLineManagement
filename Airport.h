//
// Created by vlads on 10/2/2025.
//

#ifndef AIRLINEMANAGEMENT_AIRPORT_H
#define AIRLINEMANAGEMENT_AIRPORT_H
#include <string>

class Airport {
private:
    std::string name;
public:
    ~Airport();
    explicit Airport(std::string name);
    Airport();
    void setName(std::string name);
    std::string getName() const;
};


#endif //AIRLINEMANAGEMENT_AIRPORT_H