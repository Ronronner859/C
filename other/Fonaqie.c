
//쳲��������� 1 1 2 3 5 8 13 21
//Fibonacci ���� 0 1 1 2 3 5 8  �������ƽ���� 2 �������ƽ����4 
//�õݹ鷨����fibonacci���� �ĵ�n��
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
//��������

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