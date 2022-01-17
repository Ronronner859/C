

#include<stdio.h>

int fact(int num)
{
	if (num <= 1)
	{
		return 1;
	}
	else
	{
		return num * fact(num - 1);//递归
	}
}

int fac2(int n)
{
	int i = 0;
	int ret = 1;
	for ( i = 0; i < n; i++)//非递归
	{
		ret *= i;
	}
	return ret;
}

int main()
{
	int num = 0;
	printf("请输入一个数：\n");
	scanf_s("%d", &num);
	int set = fact(num);
	printf("该数的阶乘为：%d\n", set);
	return 0;
}