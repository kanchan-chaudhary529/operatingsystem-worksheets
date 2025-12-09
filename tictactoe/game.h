#ifndef GAME_H
#define GAME_H

void initBoard(char board[3][3]);
void printBoard(char board[3][3]);
int checkWin(char board[3][3]);
void makeMove(char board[3][3], char player, int row, int col);

#endif
