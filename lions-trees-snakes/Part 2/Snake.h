#ifndef SNAKE_H_INCLUDED
#define SNAKE_H_INCLUDED
#include <string> // use to create string objects

using namespace std; // use to use string type

class Snake{

    public:
        string color;
        double length;
        bool venomous;
        Snake();
        Snake(string, double, bool);
        void display();
        static void bite();
};

#endif // SNAKE_H_INCLUDED
