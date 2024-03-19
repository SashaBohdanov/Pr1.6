#include "alcohol.h"
#include <iostream>

int main() {
    // Створення об'єктів
    Liquid water;
    Alcohol beer;

    // Введення даних з клавіатури
    std::cout << "Enter information for Liquid:" << std::endl;
    water.Read();

    std::cout << "\nEnter information for Alcohol:" << std::endl;
    beer.Read();

    // Виведення на екран
    std::cout << "\nLiquid Information:" << std::endl;
    water.Display();

    std::cout << "\nAlcohol Information:" << std::endl;
    beer.Display();

    return 0;
}
