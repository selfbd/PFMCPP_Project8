#pragma once

struct Vehicle;

struct Car : public Vehicle
{
    Car(const std::string& s);
    void closeWindows();

    void tryToEvade();
};
