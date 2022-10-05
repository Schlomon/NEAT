// Copyright (c) 2020 Schlomon
// Copyright (c) 2020 Quendt

#include "headers/genome.h"
#include "headers/connection.h"

void Genome::addConnection(Node in, Node out) {
    Connection c(in, out);
    connections.push_back(c);
}
