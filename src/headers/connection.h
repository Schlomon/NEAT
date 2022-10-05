// Copyright (c) 2020 Schlomon
// Copyright (c) 2020 Quendt

#pragma once

#include "headers/node.h"

class Connection {
 private:
    // private members
    int innovationNumber;
    Node in;
    Node out;
    double weight;
    bool enabled;
    // private methods
    void construct(Node in, Node out, double weight, bool enabled);
 public:
    // public members
    // public constructor
    Connection(Node in, Node out, double weight, bool enabled);
    Connection(Node in, Node out);
    // public methods
};
