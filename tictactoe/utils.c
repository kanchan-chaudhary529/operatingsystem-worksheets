#include "utils.h"

int isValid(int row, int col, char board[3][3]) {
    if(row < 0 || row > 2 || col < 0 || col > 2)
        return 0;
    if(board[row][col] != ' ')
        return 0;
    return 1;
}
