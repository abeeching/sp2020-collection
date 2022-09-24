#include <iostream>
#include "Lion.h"

using namespace std;

Lion::Lion()
{
    weight = 1;
    height = 1;
}

Lion::Lion(double _weight, double _height)
{
    if (_weight > 0 && _height > 0) { // check if initial inputs are positive
        weight = _weight;
        height = _height;
    }
    else {
        weight = 1;
        height = 1;
    }
}

double Lion::getWeight() const
{
    return weight;
}

double Lion::getHeight() const
{
    return height;
}

void Lion::setWeight(double _weight)
{
    if (_weight > 0) // check if weight is positive - same process followed in height
        weight = _weight;
    else
        weight = 1;
}

void Lion::setHeight(double _height)
{
    if (_height > 0)
        height = _height;
    else
        height = 1;
}

void Lion::toPrint()
{
    cout << "The lion's weight is " << weight << " and its height is " << height << endl;
}

void Lion::eat()
{
    cout << "This lion only eats meat every 48 hours; it will eat more during the rainy season." << endl;
}
