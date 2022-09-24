#include <iostream>
#include "Pine.h"

using namespace std;

Pine::Pine()
{
    age = 1;
    height = 1;
}

Pine::Pine(int _age, double _height)
{
    if (_age > 0 && _height > 0) { // check if values are positive
        age = _age;
        height = _height;
    }
    else {
        age = 1;
        height = 1;
    }
}

int Pine::getAge() const
{
    return age;
}

double Pine::getHeight() const
{
    return height;
}

void Pine::setAge(int _age)
{
    if (_age > 0) // check if value is positive - same process is followed in setHeight
        age = _age;
    else
        age = 1;
}

void Pine::setHeight(double _height)
{
    if (_height > 0)
        height = _height;
    else
        height = 1;
}

void Pine::toPrint()
{
    cout << "The age of the pine tree is " << age << " and its height is " << height << endl;
}

void Pine::produceCone()
{
    cout << "The tree produces its pinecones annually on new branches." << endl;

}
