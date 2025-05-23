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

// Only run this when a move is indeed valid
void TicTacToe::updateBoardState(int move, char letter) {
    switch (move) {
        case 1 ... 3: // Row 1
            board[0][move - 1] = letter;
            break;
        case 4 ... 6: // Row 2
            board[1][move - 1] = letter;
            break;
        case 7 ... 9: // Row 3
            board[2][move - 1] = letter;
        break;
    default:
        // fuck off, clang;
        break;
    }
}

int TicTacToe::playMove(int move, char letter)
{
    return 0;
}

bool TicTacToe::isMoveValid(const int move, const char letter)
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

char TicTacToe::resetGame(char userInput)
{

    userInput = tolower(userInput);

    // This method is a bit weird, need to refactor
    char players[2] = { 'A', 'B' };
    int randomNumber = rand() % 2;
    char startingPlayer = players[randomNumber];

    currentPlayer = startingPlayer;

    resetBoard();

    return userInput;
}

void TicTacToe::resetBoard()
{
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = '-';
        }
    }
}

void TicTacToe::runPlayerTurn(char player, int move, char letter)
{
    currentPlayer = player;

    // Human
    if (currentPlayer == 'A') {
        cout << "Ok, pick your block: ";
        cin >> move;

        cout << "Now pick X or O: ";
        cin >> letter;
    }

    bool validMove = isMoveValid(move, letter);

    if (validMove) {
        // Check who wins - how, i do not know yet. need a mechanism to keep track of which player picks which letter
        // if not a win, update board state
        // switch players
        // else set some winning condition variable
    }


}



