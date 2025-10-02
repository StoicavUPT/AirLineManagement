

#ifndef AIRLINEMANAGEMENT_PLANES_H
#define AIRLINEMANAGEMENT_PLANES_H
#include <string>

class Plane {
private:
    int id;
    std::string name;
    int capacity;
    float consumption;
public:
    ~Plane();
    Plane();
    Plane(int id, std::string name, int capacity, float consumption);
    void setId(int id);
    void setName(std::string name);
    void setCapacity(int capacity);
    void setConsumption(float consumption);
    int getId();
    std::string getName();
    int getCapacity();
    float getConsumption();
};


#endif //AIRLINEMANAGEMENT_PLANES_H