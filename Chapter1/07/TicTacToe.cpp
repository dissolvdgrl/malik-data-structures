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

int TicTacToe::playMove(int block, char letter)
{
    return 0;
}

bool TicTacToe::isMoveValid(int move, char letter)
{
    return true;
}

char TicTacToe::getWinner()
{
    return 'A';
}

char TicTacToe::getCurrentPlayer()
{
    return 'A';
}

void TicTacToe::switchCurrentPlayer()
{
    currentPlayer = 'B';
}

char TicTacToe::resetGame(char userInput) {
    // This is a bit weird, need to refactor
    cout << "Are you ready to start?" << endl;
    currentPlayer = 'A';
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



