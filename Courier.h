// Courier.h
#ifndef COURIER_H
#define COURIER_H

#include <iostream>
#include <string>

class Courier {
private:
    std::string name;
    std::string vehicle;

public:
    Courier();
    Courier(std::string, std::string);
    ~Courier();

    // Getters
    std::string getName() const;
    std::string getVehicle() const;

    // Setters
    void setName(std::string);
    void setVehicle(std::string);
};

#endif // COURIER_H
