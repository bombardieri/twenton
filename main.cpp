#include <iostream>
#include "Particle.h"

int main()
{
    std::cout << "Hello World!" << std::endl;
    Vector3 V1(4.0,0.0,0.0);
    Vector3 V2;

    std::cout << " " << V1.get_x() << " "  << V1.get_y() << " " << V1.get_z() << std::endl;
    V1.set_x(3);
    std::cout << " " << V1.get_x() << " "  << V1.get_y() << " " << V1.get_z() << std::endl;    
    V1.normalize();
    std::cout << " " << V1.get_x() << " "  << V1.get_y() << " " << V1.get_z() << std::endl;    
    V1 *= 2;
    std::cout << " " << V1.get_x() << " "  << V1.get_y() << " " << V1.get_z() << std::endl;
    V2 = V1*1;
    std::cout << " " << V2.get_x() << " "  << V2.get_y() << " " << V2.get_z() << std::endl;
    std::cout << "-----Particle-----" << std::endl;
    Particle P1;
    return 0;
}
