//
// Created by vlads on 10/2/2025.
//

#ifndef AIRLINEMANAGEMENT_AIRPORT_H
#define AIRLINEMANAGEMENT_AIRPORT_H
#include <string>

class Airport {
private:
    int id;
    std::string name;
public:
    ~Airport();
    explicit Airport(std::string name,int id);
    Airport();
    void setName(std::string name);
    std::string getName() const;
    void setId(int id);
    int getId() const;

};


#endif //AIRLINEMANAGEMENT_AIRPORT_H