#include <stdio.h>
#include <stdlib.h>
#define N 100
int r[N][N];//关系矩阵
int c[N][N];//闭包矩阵
int n;//维数
void initc(int r[N][N]);//将c[N][N]初始化r[N][N]
void RC();//计算自反闭包
void SC();//计算对称闭包
void TC();//计算传递闭包  warsahll算法 
void Input();//输入
void Display(int c[N][N]);//打印
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
void Display(int c[N][N])//输出R的关系矩阵
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
	printf("请输入该关系矩阵的阶数(小于等于100)：\n");
	scanf("%d", &n);
	if (n < 0 || n>100)
	{
		printf("输入错误！\n");
		exit(0);
	}
	printf("请输入关系矩阵：\n");
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n;j++)
		{
			scanf("%d", &r[i][j]);
			if (r[i][j] > 1 || r[i][j] < 0)
			{
				printf("输入错误！\n");
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
		c[i][i] = 1;//让所有主对角线的元素全是1
	}
	printf("自反闭包是：\n");
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
			//如果第i行第j列元素是1，那让第j行第i列的元素也为1
				c[j][i] = 1;
		}
	}
	printf("对称闭包是：\n");
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
	printf("传递闭包是：\n");
	Display(c);
}



