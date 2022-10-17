// Copyright (c) 2020 Schlomon
// Copyright (c) 2020 Quendt

#include "headers/genome.h"
#include "headers/connection.h"

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
