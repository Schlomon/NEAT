// Copyright (c) 2020 Schlomon
// Copyright (c) 2020 Quendt

#pragma once

#include "headers/node.h"
#include "headers/util.h"

class Connection {
 private:
    // private members
    const int m_innovation;
    const Node m_in;
    const Node m_out;
    double m_weight;
    bool m_enabled;
    // private methods
 public:
    // public members
    // public constructor
    Connection(Node in, Node out,
      double weight = Util::randomDouble(), bool enabled = true);
    // public methods
    Node inNode() { return m_in; }
    Node outNode() { return m_out; }
    double weight() { return m_weight; }
    bool isEnabled() { return m_enabled; }
    void disable() { m_enabled = false; }
    int innovation() { return m_innovation; }
};
