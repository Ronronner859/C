
//斐波那契数列 1 1 2 3 5 8 13 21
//Fibonacci 数列 0 1 1 2 3 5 8  第三项的平方和 2 第四项的平方和4 
//用递归法计算fibonacci数列 的第n项
#include<stdio.h>
//int count = 0;
//int fact(int n)
//{
//	if (n==3)
//	{
//		count++;
//	}
//	if (n<=2) 
//	{
//		return 1;
//	}
//	else
//	{
//		return fact(n - 1) + fact(n - 2);
//	}
//}
//迭代法：

int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}


int main()
{
	int n = 0;
	scanf_s("%d", &n);
	
	printf("%d\n",Fib(n));
	
	return 0;
}