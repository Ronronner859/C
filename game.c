
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
	//��ʼ������
	initboard(board, ROW, COL);
	//��ӡ����
	dispalyboard(board, ROW, COL);
	//����
	//�����
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
	printf("�����:>\n");
	printf("����������λ��:> ");
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
				printf("��λ������\n");
			}
		}
		else
		{
			printf("λ�ô�����������������\n");
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
		printf("��ѡ��:> ");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}



	} while (input);

}



int main()
{

	test();
	return 0;
}