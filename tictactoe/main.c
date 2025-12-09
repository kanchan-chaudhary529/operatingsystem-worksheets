#include <stdio.h>
#include "game.h"
#include "utils.h"

int main() {
    char board[3][3];
    char player = 'X';
    int row, col;
    int moves = 0;

    initBoard(board);

    while(1) {
        printBoard(board);
        printf("Player %c, enter row and column (0-2 0-2): ", player);
        scanf("%d %d", &row, &col);

        if(!isValid(row, col, board)) {
            printf("Invalid move, try again.\n");
            continue;
        }

        makeMove(board, player, row, col);
        moves++;

        if(checkWin(board)) {
            printBoard(board);
            printf("Player %c wins!\n", player);
            break;
        }

        if(moves == 9) {
            printBoard(board);
            printf("It's a draw!\n");
            break;
        }

        player = (player == 'X') ? 'O' : 'X';
    }

    return 0;
}
