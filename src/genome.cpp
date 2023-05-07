// Copyright (c) 2020 Schlomon
// Copyright (c) 2020 Quendt

#include "headers/genome.h"
#include <list>
#include "headers/connection.h"
#include "headers/util.h"

using std::list;

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

    list<Connection>& cc = child.m_connections;

    list<Connection> c1 = g1.m_connections;
    list<Connection> c2 = g2.m_connections;

    list<Connection>::iterator it1 = c1.begin();
    list<Connection>::iterator it2 = c2.begin();

    while (it1 != c1.end() && it2 != c2.end()) {
        if (it1->innovation() == it2->innovation()) {
            if (Util::randomDouble() < 0.5) {
                cc.push_back(*it1);
            } else {
                cc.push_back(*it2);
            }
            it1++;
            it2++;
        } else if (it1->innovation() < it2->innovation()) {
            if (g1.fitness() >= g2.fitness()) {
                cc.push_back(*it1);
            }
            it1++;
        } else {
            if (g2.fitness() >= g1.fitness()) {
                cc.push_back(*it2);
            }
            it2++;
        }
    }

    if (g2.fitness() >= g1.fitness()) {
        cc.splice(cc.end(), c2, it2, c2.end());
    }
    if (g1.fitness() >= g2.fitness()) {
        cc.splice(cc.end(), c1, it1, c1.end());
    }

    return child;
}
