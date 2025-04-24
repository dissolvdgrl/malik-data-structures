#include "TicTacToe.h"
#include <iostream>

using namespace std;

TicTacToe::TicTacToe()
{
    
}

void TicTacToe::printBoard() const {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << '|' << board[i][j];
        }
        cout << '|' << endl;
    }
}

void TicTacToe::updateBoardState(int move, char letter) {
    // board[move -1] = letter;
}

int TicTacToe::playMove(int block, char letter)
{
    return 0;
}

bool TicTacToe::isMoveValid(int move, char letter)
{
    bool conclusion = false;
    // move - 1, because array indexing starts at 0 and we prompt the user to enter 1-9.
    // Usually it's only techies that are aware of zero indexing for arrays.
    // Sorry, this loop is unsightly, I need to find a better way.
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (j == move - 1) {
                if (board[i][j] == letter) {
                    conclusion = false;
                }
                updateBoardState(move, letter);
                conclusion = true;
            };
        }
    }

    return conclusion;
}

// I don't know if this is even necessary
char TicTacToe::getWinner()
{
    return winner;
}

char TicTacToe::getCurrentPlayer()
{
    return currentPlayer;
}

void TicTacToe::switchCurrentPlayer()
{
    currentPlayer = 'B';
}

char TicTacToe::resetGame(char userInput) {

    userInput = tolower(userInput);

    // This method is a bit weird, need to refactor
    char players[2] = { 'A', 'B' };
    int randomNumber = rand() % 2;
    char startingPlayer = players[randomNumber];

    currentPlayer = startingPlayer;

    resetBoard();

    return userInput;
}

void TicTacToe::resetBoard() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = '-';
        }
    }
}



