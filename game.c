
#include<stdio.h>
#define ROW 3
#define COL 3
void initboard(char board[ROW][COL], int row, int col);
void dispalyboard(char board[ROW][COL], int row, int col);
void Playermove(char board[ROW][COL], int row, int col);

void menu()
{
	printf("**********************\n");
	printf("*****1.paly 0.exit****\n");
	printf("**********************\n");
}

void game()
{
	char board[ROW][COL] = { 0 };
	//初始化棋盘
	initboard(board, ROW, COL);
	//打印棋盘
	dispalyboard(board, ROW, COL);
	//下棋
	//玩家下
	Playermove(board, ROW, COL);
	dispalyboard(board, ROW, COL);
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