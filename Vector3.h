#ifndef VECTOR3_H_
#define VECTOR3_H_

class Vector3
{
    public:
        Vector3();
        Vector3(double x, double y, double z);
        // Metodi getter e setter
        double get_x();
        double get_y();
        double get_z();
        double set_x(double _x);
        double set_y(double _y);
        double set_z(double _z);
        // Metodi 
        double magnitude();
        void   normalize();
        // Scalar moltiplication
        void    operator *= (double k);
        Vector3 operator * (double k);
        // Sum of vectors
        void    operator += (const Vector3& v);
        Vector3 operator +  (const Vector3& v);
        // Subtraction of vectors
        void    operator -= (const Vector3& v);
        Vector3 operator -  (const Vector3& v);
        // Vector scalar moltiplication
        double scalarMoltiplication(const Vector3& v);
        // Vector moltiplication
        void    updateComponentProduct(const Vector3& v);
        Vector3 operator * (const Vector3& v);
    private:
        double x,y,z;
};

#endif
