#include "mainwindow.h"

#include <iostream>

#include <QApplication>

#include "Particle.h"
#include "Vector3.h"

int main(int argc, char *argv[])
{
    // Old main for lib test
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

    // Qt app skeleton
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
