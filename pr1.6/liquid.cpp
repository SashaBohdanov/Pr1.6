#include "liquid.h"
#include <iostream>

std::string Liquid::getName() const {
    return name;
}

double Liquid::getDensity() const {
    return density;
}

void Liquid::setName(const std::string& n) {
    name = n;
}

void Liquid::setDensity(double d) {
    density = d;
}

void Liquid::Init() {
    name = "";
    density = 0.0;
}

void Liquid::Read() {
    std::cout << "Enter the name of the liquid: ";
    std::getline(std::cin, name);
    std::cout << "Enter the density of the liquid: ";
    std::cin >> density;
    std::cin.ignore();
}

void Liquid::Display() const {
    std::cout << "Liquid: " << name << ", Density: " << density << std::endl;
}

std::string Liquid::toString() const {
    return "Liquid: " + name + ", Density: " + std::to_string(density);
}
