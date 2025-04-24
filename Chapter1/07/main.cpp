#include <iostream>
#include "TicTacToe.h"

using namespace std;

int main() {

    // Human = player A
    // Computer = Player B

    /* TODO:
     * Add a game state tracking mechanism to determine which letter belongs to a player.
     * Add a game state tracking mechanism to determine if a move will lead to a win.
     *
     */


    char userInput;
    TicTacToe game;

    cout << "Welcome to TIC TAC TOE!" << endl;
    cout << "To start, type y when prompted and hit Enter." << endl;
    cout << "Are you ready to start? " << endl;

    cin >> userInput;

    // Start game loop
    do {
        int move;
        char letter;

        game.resetGame(userInput);
        cout << "You are Player A." << endl;
        cout << "Player B is the computer." << endl;

        cout << "Starting player is: " << game.getCurrentPlayer() << endl;
        game.printBoard();

        cout << "Specify a move by first choosing the block (1-9) and then you'll be prompted for an X or an O." << endl;

        // The next couple of stuff should be put into a method, so that it can be called again if the move is invalid.
        cout << "Ok, pick your block: ";
        cin >> move;

        cout << "Now pick X or O: ";
        cin >> letter;

        bool isMoveValid = game.isMoveValid(move, letter);

        if (isMoveValid) {
            game.playMove(move, letter);
            game.printBoard();
            // Update board
        } else {
            cout << "You can't play in this block, please try again.";
            // Run the input again
        }

        cout << "Do you want to play again? ";
        cin >> userInput;
    } while (userInput == 'y' || userInput == 'Y');

    cout << "Goodbye :)" << endl;
    return 0;

}