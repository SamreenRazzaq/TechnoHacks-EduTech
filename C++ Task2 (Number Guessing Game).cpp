//NUMBER Guessing Game:

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main() {
    srand(time(0));
	int secret_number = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    cout << "WELCOME TO NUMBER GUESSING GAME!" << endl;
    cout << "Guess a number between 1 and 100." << endl;
    
// User's Guess:
    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;
        
//Feedback:
        if (guess == secret_number) {
            cout << "Congratulations! You guessed the correct number: " << secret_number << endl;
            cout << "You took " << attempts << " attempts." << endl;
            break;
        } else if (guess < secret_number) {
            cout << "Too low. Try again." << endl;
        } else {
            cout << "Too high. Try again." << endl;
        }
    }
	return 0;
}

