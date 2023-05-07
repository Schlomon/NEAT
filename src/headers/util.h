// Copyright (c) 2020 Schlomon
// Copyright (c) 2020 Quendt

#pragma once

#include <random>

class Util {
 private:
    // private members
    // private methods
 public:
    // public members
    // public constructor
    // public methods
    // returns a random number between 0 and 1
    static double randomDouble() {
        static std::random_device rd;
        static std::mt19937 gen(rd());
        static std::uniform_real_distribution<> dis(0, 1);
        return dis(gen);
    }
};
