//
// Created by vlads on 10/2/2025.
//

#ifndef AIRLINEMANAGEMENT_PERSON_H
#define AIRLINEMANAGEMENT_PERSON_H
#include <string>

class Person {
private:
    std::string idNumber;
    std::string name;
    std::string surname;
    std::string address;
    std::string phoneNumber;
    int age;
public:
    Person();
    Person(std::string idNumber,int age,std::string name,std::string surname,std::string address,std::string phoneNumber);
    ~Person();
    std::string getName();
    std::string getSurname();
    std::string getAddress();
    std::string getPhoneNumber();
    int getAge();
    std::string getIdNumber() const;
    void setIdNumber(std::string id);
    void setName(std::string name);
    void setSurname(std::string surname);
    void setAddress(std::string address);
    void setPhoneNumber(std::string phoneNumber);
    void setAge(int age);
};


#endif //AIRLINEMANAGEMENT_PERSON_H