#include <iostream>
#include "Vector3.h"
#include <math.h>

Vector3::Vector3() : x(0.0) , y(0.0) , z(0.0)
{
    std::cout << "Vector successfully created!\n";
}

Vector3::Vector3(double x, double y, double z) : x(x) , y(y) , z(z)
{
    std::cout << "Vector successfully created!";
} 

// Metodi getter e setter

double Vector3::get_x() {return x;}
double Vector3::get_y() {return y;}
double Vector3::get_z() {return z;}
double Vector3::set_x(double x) {
    this->x = x;
    return 0;
}
double Vector3::set_y(double y) {
    this->y = y;
    return 0;
}
double Vector3::set_z(double z) {
    this->z = z;
    return 0;
}

// Magnitude of the vector

double Vector3::magnitude()
{
    return sqrt(x*x + y*y + z*z);
}

void Vector3::normalize()
{
    double l = magnitude();
    if (l > 1)
    {
        x = x/l;
        y = y/l;
        z = z/l;
    }
}

void Vector3::operator *= (double k)
{
    x = k*x;
    y = k*y;
    z = k*z;    
}

Vector3 Vector3::operator * (double k)
{
    return Vector3(k*x , k*y , k*z);
}

// Sum
void Vector3::operator += (const Vector3& v)
{
    x = x + v.x;
    y = y + v.y;
    z = z + v.z;    
}

Vector3 Vector3::operator + (const Vector3& v)
{
    return Vector3(x + v.x , y + v.y , z + v.z);
}

// Difference
void Vector3::operator -= (const Vector3& v)
{
    x = x - v.x;
    y = y - v.y;
    z = z - v.z;    
}

Vector3 Vector3::operator - (const Vector3& v)
{
    return Vector3(x - v.x , y - v.y , z - v.z);
}

// Vector scalar moltiplication
double Vector3::scalarMoltiplication(const Vector3& v)
{
    return x*v.x + y*v.y + z*v.z;
}

// Component product
void Vector3::updateComponentProduct(const Vector3& v)
{
    x = x*v.x;
    y = y*v.y; 
    z = z*v.z;
}

Vector3 Vector3::operator * (const Vector3& v)
{
    return Vector3(x*v.x, y*v.y , z*v.z);
}
