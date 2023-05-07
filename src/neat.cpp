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
    Genome g1{};
    g1.addConnectionMutation(Node{0}, Node{1});
    g1.addConnectionMutation(Node{2}, Node{3});
    g1.addConnectionMutation(Node{4}, Node{5});

    Genome g2{};
    g2.addConnectionMutation(Node{6}, Node{7});
    g2.addConnectionMutation(Node{8}, Node{9});
    g2.addConnectionMutation(Node{10}, Node{11});

    Genome g3 = Genome::crossover(g1, g2);

    g3.print();

    return 0;
}

int Neat::getNextInnovationNumber() {
    return m_nextInnovationNumber++;
}
