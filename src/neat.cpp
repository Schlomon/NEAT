// Copyright (c) 2020 Schlomon
// Copyright (c) 2020 Quendt

#include <iostream>
#include <list>

#include "headers/neat.h"
#include "headers/genome.h"
#include "headers/util.h"

using std::cout;
using std::endl;

int Neat::m_nextInnovationNumber = 0;

int main() {
    for (int i = 0; i < 10; i++) {
        cout << Util::random() << endl;
    }

    return 0;
}

int Neat::getNextInnovationNumber() {
    m_nextInnovationNumber++;
    return m_nextInnovationNumber;
}
