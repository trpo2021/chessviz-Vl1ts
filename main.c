#include <stdio.h>

const int BoardLineSize=8;

typedef enum {    
    WKing = 'K',
    WQueen = 'Q',
    WRook = 'R',
    WKnight = 'N',
    WBishop = 'B',
    WPawn = 'P',
    
    BKing = 'k',
    BQueen = 'q',
    BRook = 'r',
    BKnight = 'n',
    BBishop = 'b',
    BPawn = 'p',
    
    EmptyZone = ' ',
} Figures;

typedef struct{			//struct Board_Struct{
    Figures Board[8][8];	//Figures Board[8][8];
} Board_Struct;			//};

void CreateBoard(Board_Struct *board_pointer)
{	
	board_pointer->Board[7][0]=WRook;
	board_pointer->Board[7][1]=WKnight;
	board_pointer->Board[7][2]=WBishop;
	board_pointer->Board[7][3]=WQueen;
	board_pointer->Board[7][4]=WKing;
	board_pointer->Board[7][5]=WBishop;
	board_pointer->Board[7][6]=WKnight;
	board_pointer->Board[7][7]=WRook;
	
	board_pointer->Board[0][0]=BRook;
	board_pointer->Board[0][1]=BKnight;
	board_pointer->Board[0][2]=BBishop;
	board_pointer->Board[0][3]=BQueen;
	board_pointer->Board[0][4]=BKing;
	board_pointer->Board[0][5]=BBishop;
	board_pointer->Board[0][6]=BKnight;
	board_pointer->Board[0][7]=BRook;
	
	for (int i=0; i<BoardLineSize; ++i)
	{
		board_pointer->Board[6][i]=WPawn;
		board_pointer->Board[1][i]=BPawn;
	}
	for (int i=2; i<BoardLineSize-2; ++i)
		for (int j=0; j<BoardLineSize; ++j)
			board_pointer->Board[i][j]=EmptyZone;
}

void PrintBoard(Board_Struct *board_pointer)
{
	int LineNumber=8;
	for (int i=0; i<BoardLineSize; ++i)
	{
		printf("%d", LineNumber);
		LineNumber--;
		for (int j=0; j<BoardLineSize; ++j)
			printf(" %c", board_pointer->Board[i][j]);
		printf("\n");
	}
	printf("  a b c d e f g h\n");
}

int main() 
{
	Board_Struct Board;		//struct Board_Struct Board;
	CreateBoard(&Board);
	PrintBoard(&Board);
}
