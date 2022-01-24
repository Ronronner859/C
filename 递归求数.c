#include<stdio.h>
void print(int n);

void print(int n)
{
	if (n)
	{
		print(n - 1);
		printf("%d\n", n);
	}
}
int main()
{
	long int n = 0;
	scanf_s("%d", &n);
	print(n);
	return 0;
}