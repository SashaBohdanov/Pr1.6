#pragma once
#include <string>

class Liquid {
private:
    std::string name;
    double density;

public:
    // Методи доступу
    std::string getName() const;
    double getDensity() const;
    void setName(const std::string& n);
    void setDensity(double d);

    // Методи
    void Init();
    void Read();
    void Display() const;
    std::string toString() const;
};

