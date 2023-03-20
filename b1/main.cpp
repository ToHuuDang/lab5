#include <iostream>
#include "Circle.h"

using namespace std;

int main() {
    double radius;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    Cirle myCircle(radius);
    
    myCircle.display();
    return 0;
}
