// Copyright (c) 2020 Schlomon
// Copyright (c) 2020 Quendt

#pragma once

#include <random>

class Util {
 private:
    // private members
    // private methods
 public:
    // public members
    // public constructor
    // public methods
    // returns a random number between 0 and 1
    static float random() {
        // TODO(Schlomon): make only one engine per Thread
        std::random_device rd;
        std::default_random_engine rng;
        rng.seed(rd());
        std::uniform_real_distribution<float> distr(0, 1);
        return distr(rng);
    }
};
