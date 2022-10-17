// Copyright (c) 2020 Schlomon
// Copyright (c) 2020 Quendt

#pragma once

#include <list>
#include "headers/connection.h"

using std::list;

class Genome {
 private:
    // private members
    list<Connection> m_connections;
    double m_fitness;
    // private methods
 public:
    // public members
    // public constructor
    // public methods
    static Genome crossover(Genome g1, Genome g2);
    void addConnectionMutation(Node in, Node out);
    void addNodeMutation(Connection oldConnection);
    double fitness() { return m_fitness; };
};
