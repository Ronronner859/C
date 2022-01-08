#include<stdio.h>

void Swap(int* x,int* y)
{
	int temp;
	temp=*x;
	 *x=*y;
	 *y=temp;
 } 

int main()
{
	int a=10;
	int b=20;
	printf("%d %d\n",a,b);
	Swap(&a,&b);
	printf("%d %d\n",a,b);
	return 0;
	
 } 
