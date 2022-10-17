// Copyright (c) 2020 Schlomon
// Copyright (c) 2020 Quendt

#pragma once
#include <list>

class Neat {
 private:
    // private members
    static int m_nextInnovationNumber;
    list<Connection> m_mutationsInCurrentGeneration{};
    // private methods
 public:
    // public members
    // public constructor
    // public methods
    static int getNextInnovationNumber();
};
