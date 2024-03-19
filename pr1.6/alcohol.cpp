#include "alcohol.h"
#include <iostream>

Liquid Alcohol::getLiquid() const {
    return liquid;
}

double Alcohol::getStrength() const {
    return strength;
}

void Alcohol::reassignLiquid(const Liquid& l) {
    liquid = l;
}

void Alcohol::changeStrength(double s) {
    strength = s;
}

void Alcohol::Init() {
    liquid.Init();
    strength = 0.0;
}

void Alcohol::Read() {
    liquid.Read();
    std::cout << "Enter the strength of the alcohol: ";
    std::cin >> strength;
    std::cin.ignore();
}

void Alcohol::Display() const {
    liquid.Display();
    std::cout << "Strength: " << strength << "%" << std::endl;
}

std::string Alcohol::toString() const {
    return liquid.toString() + ", Strength: " + std::to_string(strength) + "%";
}
