#include <iostream>
#include "Snake.h"
#include <string> // use for string objects

using namespace std; // to use string type

Snake::Snake()
{
    color = "Green";
    length = 1;
    venomous = 0;
}

Snake::Snake(string _color, double _length, bool _venomous)
{
    color = _color;
    if (_length > 0) // avoid negative length input
        length = _length;
    else
        length = 1;
    venomous = _venomous;
}

void Snake::display()
{
    cout << "The color of the snake is " << color << ", its length is " << length;
    if (venomous)
        cout << ", and it is venomous." << endl;
    else
        cout << ", and it is not venomous." << endl;
}

void Snake::bite()
{
    // provide a general description of the snakes - both venomous and nonvenomous - does not differentiate between the two
    cout << "These snakes bite for self protection, and they will bite prey for food." << endl;
    cout << "For those that are venomous, their venom helps them greatly in a fight." << endl;
}
