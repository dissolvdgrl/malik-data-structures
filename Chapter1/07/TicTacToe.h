#ifndef INC_07_TICTACTOE_H
#define INC_07_TICTACTOE_H

class TicTacToe {
public:
    int getBoard();
    int playMove(int block, char letter);
    bool isMoveValid(int move, char letter);
    bool getWinner();
    

private:
    int board[3][3] = {
        { 0, 1, 2 },
        { 3, 4, 5 }
    };
    char playerA, playerB, winner, letter, block;
    int move;

};


#endif //INC_07_TICTACTOE_H