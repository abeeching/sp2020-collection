#include <iostream>
#include "Lion.h"
#include "Pine.h"

using namespace std;

int main()
{
    // TEST OF LION CLASS
    double weight2, height2;
    Lion lion1; // no-arg lion object
    cout << "Please enter a weight and a height." << endl;
    cin >> weight2;
    cin >> height2;
    Lion lion2(weight2, height2); // user-input object

    // Lion Class functions
    cout << "The lion's weight is " << lion1.getWeight() << endl;
    cout << "The second lion's weight is " << lion2.getWeight() << endl;
    cout << "The lion's height is " << lion1.getHeight() << endl;
    cout << "The second lion's height is " << lion2.getHeight() << endl;
    lion1.setWeight(12);
    lion1.setHeight(12);
    lion2.setWeight(1);
    lion2.setHeight(1);
    cout << "FOR LION 1: ";
    lion1.toPrint();
    cout << "FOR LION 2: ";
    lion2.toPrint();
    Lion::eat(); // static method

    cout << endl;

    // TEST OF PINE CLASS
    int age2;
    double pineHeight;
    Pine pine1; // no-arg pine object
    cout << "Please enter an age and a height:" << endl;
    cin >> age2;
    cin >> pineHeight;
    Pine pine2(age2, pineHeight); // user-input object

    // Pine Class functions
    cout << "The pine tree's age is " << pine1.getAge() << endl;
    cout << "The second pine tree's age is " << pine2.getAge() << endl;
    cout << "The pine tree's height is " << pine1.getHeight() << endl;
    cout << "The second pine tree's height is " << pine2.getHeight() << endl;
    pine1.setAge(10);
    pine1.setHeight(100.0);
    pine2.setAge(1);
    pine2.setHeight(1);
    cout << "FOR TREE 1: ";
    pine1.toPrint();
    cout << "FOR TREE 2: ";
    pine2.toPrint();
    Pine::produceCone(); // static method
}
