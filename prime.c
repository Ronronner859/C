
#include<stdio.h>
#include<math.h>

//�����ĸ��� ������1������֮��������ܱ���������Ϊ����
//
//int is_prime(int n)
//{
//	int m = 2;//2  --> n-1 (sqrt(n))
//	while (m <= sqrt(n) )
//	{
//		if (n % m == 0)
//		{
//			return 0;//return 0��break ������ǿ
//		}
//		else
//		{
//			m++;
//		}
//	}
//	return 1;
//}
int is_prime(int n)
{
	int j = 0;
	for ( j = 2; j <= sqrt(n); j++)
	{
		if (n%j == 0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int i = 0;
	for ( i = 2; i < 200; i++)
	{
		if (is_prime(i) == 1)
		{
			printf("%d ", i);
		}
	}
	return 0;
}