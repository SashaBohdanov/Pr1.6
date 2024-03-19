#pragma once
#include "liquid.h"

class Alcohol {
private:
    Liquid liquid;
    double strength;

public:
    // Методи доступу
    Liquid getLiquid() const;
    double getStrength() const;
    void reassignLiquid(const Liquid& l);
    void changeStrength(double s);

    // Методи
    void Init();
    void Read();
    void Display() const;
    std::string toString() const;
};
