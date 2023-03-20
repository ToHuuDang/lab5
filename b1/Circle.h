#include <iostream>

using namespace std;

class Cirle{
    private:
    double Radius;
    double Pi = 3.14159;

    public:
    Cirle();
    Cirle(double radius);

    void setRadius(double radius);

    double getRadius();
    double getArea();
    double getDiameter();
    double getCircumference();

    void display();

};