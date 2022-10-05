// Copyright (c) 2020 Schlomon
// Copyright (c) 2020 Quendt

#include <iostream>

#include "headers/connection.h"
#include "headers/neat.h"
#include "headers/util.h"

Connection::Connection(Node in, Node out, double weight, bool enabled) {
    construct(in, out, weight, enabled);
}

Connection::Connection(Node in, Node out) {
    construct(in, out, Util::random(), true);
}

void Connection::construct(Node in, Node out, double weight, bool enabled) {
    Connection::in = in;
    Connection::out = out;
    Connection::weight = weight;
    Connection::enabled = enabled;
    innovationNumber = Neat::getNextInnovationNumber();
}
