#include <iostream>
#include "SemiTruck.h"

SemiTruck::SemiTruck(const std::string& n) : Vehicle(n) {}
SemiTruck::~SemiTruck() = default;
SemiTruck::SemiTruck(const SemiTruck&) = default;
SemiTruck& SemiTruck::operator=(const SemiTruck&) = default;

void SemiTruck::tryToEvade()
{
    // Vehicle::setSpeed(s);
    setSpeed(0);
    std::cout << name << ": < Mr. Magoo, at your service" << std::endl;
}
