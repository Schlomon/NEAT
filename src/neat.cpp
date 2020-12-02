// Copyright 2020 <Robin Quendt, Salomo Hummel>

#include <iostream>
#include "headers/genome.h"

int main() {
    Genome genome;
    int a, b;
    std::cout << "Enter two numbers:" << std::endl;
    std::cin >> a >> b;
    std::cout << "Thanks, your result is: " << genome.test(a, b) << std::endl;
    return 0;
}
