#include "Circle.h"
using namespace std;

Cirle::Cirle(){
    this -> Radius = 0.0;
};

Cirle::Cirle(double radius){
    this -> Radius = radius;
};

void Cirle::setRadius(double radius){
    this -> Radius = radius;
}

double Cirle::getRadius(){
    return this -> Radius;
}

double Cirle::getArea(){
    return this -> Pi * this -> Radius * this -> Radius;
}

double Cirle::getDiameter(){
    return this -> Radius * 2;
}

double Cirle::getCircumference(){
    return this -> Pi * this -> Radius * 2;
}

void Cirle::display(){
    cout << "Radius: " << this->Radius << endl;
    cout << "Area: " << this->getArea() << endl;
    cout << "Diameter: " << this->getDiameter() << endl;
    cout << "Circumference: " << this->getCircumference() << endl;
}