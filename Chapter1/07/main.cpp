#include <iostream>
#include "TicTacToe.h"

using namespace std;

int main() {

    // Human = player A
    // Computer = Player B

    char userInput;
    TicTacToe game;

    cout << "Welcome to TIC TAC TOE!" << endl;
    cout << "To start, type y when prompted and hit Enter." << endl;
    cout << "Are you ready to start? " << endl;

    cin >> userInput;

    // Start game loop
    do {
        game.resetGame(userInput);

        // Do some game logic here

        cout << "Do you want to play again? ";
        cin >> userInput;
    } while (userInput == 'y' || userInput == 'Y');

    cout << "Goodbye :)" << endl;
    return 0;

}