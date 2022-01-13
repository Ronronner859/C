#define ROW 3
#define COL 3

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void initboard(char board[ROW][COL], int row, int col);
void dispalyboard(char board[ROW][COL], int row, int col);
void Playermove(char board[ROW][COL], int row, int col);
void Competermove(char board[ROW][COL], int row, int col);
char Iswiner(char board[ROW][COL], int row, int col);
int Isfull(char board[ROW][COL], int row, int col);

void menu()
{
	printf("**********************\n");
	printf("*****1.paly 0.exit****\n");
	printf("**********************\n");
}

void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	//初始化棋盘
	initboard(board, ROW, COL);
	//打印棋盘
	dispalyboard(board, ROW, COL);
	//下棋
	while (1)//对弈
	{
		//玩家下
		Playermove(board, ROW, COL);
		dispalyboard(board, ROW, COL);

		ret = Iswiner(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//电脑下棋
		Competermove(board, ROW, COL);
		dispalyboard(board, ROW, COL);
		ret = Iswiner(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		
	}
	if (ret == '*')
	{
		printf("电脑赢！\n");
	}
	else if (ret == '#')
	{
		printf("玩家赢！\n");
	}
	else
	{
		printf("平局！\n");
	}
}

void initboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void dispalyboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}

	}
}

void Competermove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑走:> \n");

	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '*';
			break;
		}
	}
}

char Iswiner(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for ( i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][0];
		}
	}
	for ( i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[0][i];
		}
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[0][0];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[0][0];
	}
	if (1 == Isfull(board, ROW, COL))
	{
		return 'Q';
	}
	else
	{
		return 'C';
	}
}

int Isfull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for ( i = 0; i < row; i++)
	{
		for ( j = 0; j <col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;//满了
			}
		}
	}
	return 1;//没满
}
void Playermove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家下:>\n");
	printf("请输入坐标位置:> ");
	scanf_s("%d%d", &x,&y);
	while (1)
	{
		if (x >= 1 && x <= 3 && y >= 1 && y <= 3)
		{
			if (board[x-1][y-1]= ' ')
			{
				board[x - 1][y - 1] = '#';
				break;
			}
			else
			{
				printf("该位置已下\n");
			}
		}
		else
		{
			printf("位置错误，请重新输入坐标\n");
		}
	}
}

/*void dispalyboard(char board[ROW][COL], int row, int col)
{
	int i;
	int j;
	for (i = 0; i < row; i++)
	{
		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
		if (i < row - 1)
		{
		printf("---|---|---\n");
		}

	}
}*/

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:> ");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择！\n");
			break;
		}



	} while (input);

}

int main()
{

	test();
	return 0;
}