#include "Particle.h"

#include <iostream>
#include <algorithm>
#include <stdexcept>
#include <cmath>

//default constructor
Particle::Particle() : name("unknown"), four_momentum(new std::vector<double>(4, 0.0)) {
    std::cout << "Calling Default Constructor" << std::endl;
}

//parameterized constructor
Particle::Particle(std::string p_name, double E, double px, double py, double pz) {
    std::cout << "Calling Parameterised Constructor" << std::endl;
    //add validation here later

    name = p_name;
    four_momentum = new std::vector<double>();
    four_momentum->push_back(E);
    four_momentum->push_back(px);
    four_momentum->push_back(py);
    four_momentum->push_back(pz);
}

//destructor
Particle::~Particle() {
    std::cout << "Calling Destructor" << std::endl;
    delete four_momentum;
}