// Copyright (c) 2020 Schlomon
// Copyright (c) 2020 Quendt

#include "headers/genome.h"
#include "headers/connection.h"
#include "headers/util.h"

void Genome::addConnectionMutation(Node in, Node out) {
    Connection c{in, out};
    m_connections.push_back(c);
}

void Genome::addNodeMutation(Connection old) {
    old.disable();

    Node newNode{};
    Connection c1{old.inNode(), newNode, 1};
    Connection c2{newNode, old.outNode(), old.weight()};
    m_connections.push_back(c1);
    m_connections.push_back(c2);
}

Genome Genome::crossover(Genome g1, Genome g2) {
    Genome child{};
    for (auto c1 : g1.m_connections) {
        for (auto c2 : g2.m_connections) {
            if (c1.innovation() == c2.innovation()) {
                if (Util::random() > 0.5) {
                    child.m_connections.push_back(c1);
                } else {
                    child.m_connections.push_back(c2);
                }
            } else {
                if (g1.fitness() > g2.fitness()) {
                    child.m_connections.push_back(c1);
                } else {
                    child.m_connections.push_back(c2);
                }
            }
        }
    }
    return child;
}
