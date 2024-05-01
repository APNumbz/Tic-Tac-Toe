#include <iostream>
using namespace std;

#include "GameState.h"

//***********************************************************
// checkLastPlayerWin: determines if the player with the most
//   recent move has won the tic tac toe game
// returns true if the last move has won the game, otherwise false.
//***********************************************************
bool GameState::checkLastPlayerWin() {
    char targetSymbol = getCurrentPlayer() ? 'x' : 'o';
    int sumHorizontal, sumVertical;
    for (int i = 0; i < 3; ++i){
        sumHorizontal = 0;
        sumVertical = 0;
        for (int j = 0; j < 3; ++j){
            sumHorizontal += boardState[i][j] == targetSymbol;
            sumVertical += boardState[j][i] == targetSymbol;
        }
        if (sumHorizontal == 3 || sumVertical == 3)
            return true;
    }
    int sumDiagonal1 = 0, sumDiagonal2 = 0;
    for (int i = 0; i < 3; ++i){
        sumDiagonal1 += boardState[i][i] == targetSymbol;
        sumDiagonal2 += boardState[i][2 - i] == targetSymbol;
    }
    if (sumDiagonal1 == 3 || sumDiagonal2 == 3)
        return true;

    return false;
}

//***********************************************************
// constructor: initializes game board to all '_' underscores.
//***********************************************************
GameState::GameState() {

}

//***********************************************************
// getCurrentPlayer returns the player that has to make the next turn.
// returns 0 for player 0 and 1 for player 1
//***********************************************************
int GameState::getCurrentPlayer() {

}

//***********************************************************
// addMove: given the move of the current player, it updates
// the state of the board and stack of the past moves.
// returns -1 if the turn is invalid (the target position is not empty)
// returns 0 if the move was successful and all positions are filled
// returns 1 if the move was successful and there are moves available,
//***********************************************************
int GameState::addMove(Move move) {

}

//***********************************************************
// undoLast: Undoes the last turn by changing the board state to the
//   previous one and removing the last move from the stack.
// returns true if the move was removed, false if there are
//   no moves to undo.
//***********************************************************
bool GameState::undoLast() {

}

//***********************************************************
// displayBoardState: Prints the board state to the "out" stream.
//***********************************************************
void GameState::displayBoardState(std::ostream& out) {

}


