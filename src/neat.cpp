// Copyright (c) 2020 Schlomon
// Copyright (c) 2020 Quendt

#include <iostream>
#include "genome.h"

int main() {
    Genome genome;
    int a, b;
    std::cout << "Enter two numbers:" << std::endl;
    std::cin >> a >> b;
    std::cout << "Thanks, your result is: " << genome.test(a, b) << std::endl;
    return 0;
}
