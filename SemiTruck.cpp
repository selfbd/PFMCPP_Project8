#include <iostream>
#include "SemiTruck.h"

SemiTruck::SemiTruck(const std::string& n) : Vehicle(n) {}
SemiTruck::~SemiTruck() = default;
SemiTruck::SemiTruck(const SemiTruck&) = default;
SemiTruck& SemiTruck::operator=(const SemiTruck&) = default;

void SemiTruck::pullOver()
{
    setSpeed(0);
    std::cout << name << ": < Mr. Magoo, at your service" << std::endl;
}

void SemiTruck::pingCBRadio()
{
    std::cout << name << ": Breaker 1-9. Breaker 1-9. Watch out for Smokey." << std::endl;
}

