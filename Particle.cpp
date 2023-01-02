#include <iostream>
#include "Particle.h"

Particle::Particle() : Pos(Vector3()) , Vel(Vector3()) , Acc(Vector3())
{
    std::cout << "Particle successfully created!\n";
}
