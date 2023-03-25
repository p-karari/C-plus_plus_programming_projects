#include <iostream>

using namespace std;

int main()
{

    int guess;
    int secretNum = 7;
    int guessCount = 0;
    int guessLimit = 3;
    bool outOfGuesses = false;

    while (guess != secretNum && !outOfGuesses)
    {
        if (guessCount != guessLimit)
        {
            cout << "Enter guess : ";
            cin >> guess;
            guessCount++;

        }
        else{outOfGuesses = true;
        }


    }

    if(outOfGuesses)
    {
        cout << "YOU LOOSE!";
    }
    else
        {
            cout << "You Win!!";
        }

    return 0;
}
