

#include<stdio.h>

int fact(int num)
{
	if (num <= 1)
	{
		return 1;
	}
	else
	{
		return num * fact(num - 1);//�ݹ�
	}
}

int fac2(int n)
{
	int i = 0;
	int ret = 1;
	for ( i = 0; i < n; i++)//�ǵݹ�
	{
		ret *= i;
	}
	return ret;
}

int main()
{
	int num = 0;
	printf("������һ������\n");
	scanf_s("%d", &num);
	int set = fact(num);
	printf("�����Ľ׳�Ϊ��%d\n", set);
	return 0;
}