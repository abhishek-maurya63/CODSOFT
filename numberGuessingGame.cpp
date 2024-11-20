#include <iostream>
#include <math.h>
#include <ctime>
using namespace std;
int randDigits()
{
    return 1 + (rand() % 3);
}

int randNum()
{
    int randDigit = randDigits();
    int min = pow(10, randDigit - 1);
    int max = pow(10, randDigit) - 1;
    cout << "Guess the number of " << randDigit << " digits." << endl;
    return min + (rand() % (max - min + 1));
}
int main()
{
    srand(time(0));
    int userGuess;
    char choose;
    cout << " To start the game, Press 'Y' otherwise 'N' to exit." << endl;
    cin >> choose;

    int random = randNum();
    cin >> userGuess;

    while (choose != 'N')
    {
        if (userGuess == random)
        {
            cout << "Superb!!! you guessed it right the random Number is " << random << endl;
            cout << "Do you want to continue?" << endl;
            cout << " To continue the game, Press 'Y' otherwise 'N' to exit." << endl;
            cin >> choose;
            random = randNum();
        }
        else if (userGuess > random)
        {
            cout << "Too high! Try again." << endl;
        }
        else
        {
            cout << "Too low! Try again." << endl;
        }
        cin >> userGuess;
    }

    return 0;
}
