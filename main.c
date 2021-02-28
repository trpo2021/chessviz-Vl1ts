#include <stdio.h>

const int board_line_size=8;

void create_board(char board[board_line_size][board_line_size])
{	
	board[7][0]='R';
	board[7][1]='N';
	board[7][2]='B';
	board[7][3]='Q';
	board[7][4]='K';
	board[7][5]='B';
	board[7][6]='N';
	board[7][7]='R';
	
	board[0][0]='r';
	board[0][1]='n';
	board[0][2]='b';
	board[0][3]='q';
	board[0][4]='k';
	board[0][5]='b';
	board[0][6]='n';
	board[0][7]='r';
	
	for (int i=0; i<board_line_size; ++i)
	{
		board[6][i]='P';
		board[1][i]='p';
	}
	for (int i=2; i<board_line_size-2; ++i)
		for (int j=0; j<board_line_size; ++j)
			board[i][j]=' ';
}

void print_board(char board[board_line_size][board_line_size])
{
	int line_number=8;
	for (int i=0; i<board_line_size; ++i)
	{
		printf("%d", line_number);
		line_number--;
		for (int j=0; j<board_line_size; ++j)
			printf(" %c", board[i][j]);
		printf("\n");
	}
	printf("  a b c d e f g h\n");
}

int main() 
{
	char chessboard[board_line_size][board_line_size];
	create_board(chessboard);
	print_board(chessboard);
}
