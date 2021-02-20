#include <stdio.h>

const int board_line_size = 8;

typedef enum {
    wKing = 'K',
    wQueen = 'Q',
    wRook = 'R',
    wKnight = 'N',
    wBishop = 'B',
    wPawn = 'P',

    bKing = 'k',
    bQueen = 'q',
    bRook = 'r',
    bKnight = 'n',
    bBishop = 'b',
    bPawn = 'p',

    empty_zone = ' ',
} Figures;

typedef struct {         // struct Board_Struct{
    Figures Board[8][8]; // Figures Board[8][8];
} Board_Struct;          //};

void create_board(Board_Struct* board_pointer)
{
    board_pointer->Board[7][0] = wRook;
    board_pointer->Board[7][1] = wKnight;
    board_pointer->Board[7][2] = wBishop;
    board_pointer->Board[7][3] = wQueen;
    board_pointer->Board[7][4] = wKing;
    board_pointer->Board[7][5] = wBishop;
    board_pointer->Board[7][6] = wKnight;
    board_pointer->Board[7][7] = wRook;

    board_pointer->Board[0][0] = bRook;
    board_pointer->Board[0][1] = bKnight;
    board_pointer->Board[0][2] = bBishop;
    board_pointer->Board[0][3] = bQueen;
    board_pointer->Board[0][4] = bKing;
    board_pointer->Board[0][5] = bBishop;
    board_pointer->Board[0][6] = bKnight;
    board_pointer->Board[0][7] = bRook;

    for (int i = 0; i < board_line_size; ++i) {
        board_pointer->Board[6][i] = wPawn;
        board_pointer->Board[1][i] = bPawn;
    }
    for (int i = 2; i < board_line_size - 2; ++i)
        for (int j = 0; j < board_line_size; ++j)
            board_pointer->Board[i][j] = empty_zone;
}

void print_board(Board_Struct* board_pointer)
{
    int line_number = 8;
    for (int i = 0; i < board_line_size; ++i) {
        printf("%d", line_number);
        line_number--;
        for (int j = 0; j < board_line_size; ++j)
            printf(" %c", board_pointer->Board[i][j]);
        printf("\n");
    }
    printf("  a b c d e f g h\n");
}

int main()
{
    Board_Struct Board; // struct Board_Struct Board;
    create_board(&Board);
    print_board(&Board);
}
