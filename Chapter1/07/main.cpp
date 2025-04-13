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

    cin >> userInput;

    game.resetGame(userInput);

    return 0;
}