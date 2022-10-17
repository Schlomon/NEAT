// Copyright (c) 2020 Schlomon
// Copyright (c) 2020 Quendt

#include <iostream>

#include "headers/connection.h"
#include "headers/neat.h"
#include "headers/util.h"

Connection::Connection(Node in, Node out, double weight, bool enabled)
        : m_in{in}, m_out{out}, m_weight{weight}, m_enabled{enabled},
        m_innovation{Neat::getNextInnovationNumber()} {
}
