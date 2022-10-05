// Copyright (c) 2020 Schlomon
// Copyright (c) 2020 Quendt

#pragma once

#include <list>
#include "headers/connection.h"

using std::list;

class Genome {
 private:
    // private members
    list<Connection> connections;
    // private methods
 public:
    // public members
    // public constructor
    // public methods
    void addConnection(Node in, Node out);
};
