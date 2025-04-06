#include "TicTacToe.h"
#include <iostream>

using namespace std;

TicTacToe::TicTacToe()
{
    
}

void TicTacToe::printBoard()
{
    cout << "HI" << endl;
    /*
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < i; j++) {
            cout << board[i][j];
        }
        cout << endl;
    }
    */
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



