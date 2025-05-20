#ifndef INC_07_TICTACTOE_H
#define INC_07_TICTACTOE_H

class TicTacToe {
public:
    TicTacToe();
    
    void printBoard() const;
    void updateBoardState(int move, char letter);
    bool isMoveValid(int move, char letter);
    char getWinner();  
    char getCurrentPlayer(); // returns the player whose current turn it is.
    void switchCurrentPlayer(); // switches the current player to the other one when the turn is over.
    char resetGame(char userInput); // Resets the game state and starts again
    void runPlayerTurn(char player, int move, char letter);

private:
    char board[3][3] = {
        {'-','-','-'},
        {'-','-','-'},
        {'-','-','-'}
    };
    char playerA = 'A', playerB = 'B', winner, currentPlayer;
    void resetBoard();
    int playMove(int move, char letter);
};


#endif //INC_07_TICTACTOE_H