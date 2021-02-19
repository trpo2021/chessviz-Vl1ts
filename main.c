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

void CreateBoard()
{
	Figures Board[8][8];	
	
	Board[7][0]=WRook;
	Board[7][1]=WKnight;
	Board[7][2]=WBishop;
	Board[7][3]=WQueen;
	Board[7][4]=WKing;
	Board[7][5]=WBishop;
	Board[7][6]=WKnight;
	Board[7][7]=WRook;
	
	Board[0][0]=BRook;
	Board[0][1]=BKnight;
	Board[0][2]=BBishop;
	Board[0][3]=BQueen;
	Board[0][4]=BKing;
	Board[0][5]=BBishop;
	Board[0][6]=BKnight;
	Board[0][7]=BRook;
	
	for (int i=0; i<BoardLineSize; ++i)
	{
		Board[6][i]=WPawn;
		Board[1][i]=BPawn;
	}
	for (int i=2; i<BoardLineSize-2; ++i)
		for (int j=0; j<BoardLineSize; ++j)
			Board[i][j]=EmptyZone;
}

void PrintBoard(Figures Board)
{
	int LineNumber=8;
	for (int i=0; i<BoardLineSize; ++i)
	{
		printf("%d", LineNumber);
		LineNumber--;
		for (int j=0; j<BoardLineSize; ++j)
			printf(" %c", Board[i][j]);
		printf("\n");
	}
	printf("  a b c d e f g h\n");
}

int main() 
{
	Figures Board;
	CreateBoard();
	PrintBoard(Board);
}
