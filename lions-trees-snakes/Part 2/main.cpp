#include <iostream>
#include "Snake.h"
#include <string> // access to string object

using namespace std;

int main()
{
    string snakeColor;
    double snakeLength;
    bool snakeVenomous;

    Snake snake1; // no-arg

    // user inputs
    cout << "Please enter a string: ";
    getline(cin, snakeColor, '\n');

    cout << "Please enter a value for its length: ";
    cin >> snakeLength;

    cout << "Is the snake venomous? Input 0 if it isn't, and any other number if it is." << endl;
    cin >> snakeVenomous;

    // create user-defined snake, display info using display() methods and display general snake info
    Snake snake2(snakeColor, snakeLength, snakeVenomous);
    snake1.display();
    snake2.display();
    Snake::bite();
}
