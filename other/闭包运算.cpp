#include <stdio.h>
#include <stdlib.h>
#define N 100
int r[N][N];//��ϵ����
int c[N][N];//�հ�����
int n;//ά��
void initc(int r[N][N]);//��c[N][N]��ʼ��r[N][N]
void RC();//�����Է��հ�
void SC();//����ԳƱհ�
void TC();//���㴫�ݱհ�  warsahll�㷨 
void Input();//����
void Display(int c[N][N]);//��ӡ
int main()
{
	Input();
	RC();
	SC();
	TC();
}
void initc(int (*r)[N])
{
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n;j++)
		{
			c[i][j] = r[i][j];
		}
	}
}
void Display(int c[N][N])//���R�Ĺ�ϵ����
{
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n;j++)
		{
			printf("   %d ",c[i][j]);
		}
		printf("\n");
	}
}
void Input()
{
	printf("������ù�ϵ����Ľ���(С�ڵ���100)��\n");
	scanf("%d", &n);
	if (n < 0 || n>100)
	{
		printf("�������\n");
		exit(0);
	}
	printf("�������ϵ����\n");
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n;j++)
		{
			scanf("%d", &r[i][j]);
			if (r[i][j] > 1 || r[i][j] < 0)
			{
				printf("�������\n");
				exit(0);
			}
		}
	}
}
void RC()
{

	initc(r);
	for (int i = 0;i < n;i++)
	{
		c[i][i] = 1;//���������Խ��ߵ�Ԫ��ȫ��1
	}
	printf("�Է��հ��ǣ�\n");
	Display(c);
}
void SC()
{
	
	initc(r);
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n;j++)
		{
			if (c[i][j] == 1)
			//�����i�е�j��Ԫ����1�����õ�j�е�i�е�Ԫ��ҲΪ1
				c[j][i] = 1;
		}
	}
	printf("�ԳƱհ��ǣ�\n");
	Display(c);
}
void TC()
{

	initc(r);
	int i, j, k;
	for (i = 0;i < n;i++)
	{
		for (j = 0;j < n;j++)
		{
			if (c[j][i] >= 1)
			{
				for (k = 0;k < n;k++)
				{
					c[j][k] = c[j][k] + c[i][k];
				}
			}
		}
	}
		for (i = 0;i < n;i++)
	{
		for (j = 0;j < n;j++)
		{
			if (c[i][j] > 1)
				c[i][j] = 1;
		}
	}
	printf("���ݱհ��ǣ�\n");
	Display(c);
}



