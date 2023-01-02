#ifndef PARTICLE_H_
#define PARTICLE_H_

#include "Vector3.h"

class Particle
{
    public:
        Particle();
    private:
        double  m  ; // Massa
        Vector3 Pos; // Posizione
        Vector3 Vel; // Velocità
        Vector3 Acc; // Accelerazione
};

#endif
