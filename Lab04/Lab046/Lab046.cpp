#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(static_cast<unsigned int>(time(0)));
    int secret = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    cout << "Guess the number (between 1 and 100):" << endl;

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        ++attempts;

        if (guess < secret) {
            cout << "Too low. Try again." << endl;
        }
        else if (guess > secret) {
            cout << "Too high. Try again." << endl;
        }
        else {
            cout << "Congratulations! You guessed the number in " << attempts << " attempts." << endl;
        }
    } while (guess != secret);

    return 0;
}
