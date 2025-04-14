#include <iostream>
#include "TicTacToe.h"

using namespace std;

int main() {

    // Human = player A
    // Computer = Player B

    char userInput;

    cout << "Welcome to TIC TAC TOE!" << endl;
    cout << endl;

    TicTacToe game;

    cout << "Are you ready to start?" << endl;

    cin >> userInput;

    char continueGame = game.resetGame(userInput);

    if (continueGame == 'n') {
        return 0;
    } else {
        // reinitialise the game
    }

}