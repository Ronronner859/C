#include<stdio.h>
int main()

{
	int a ;//a 是一个普通的整形变量 
	scanf_s("%d", &a);
	int* p = &a;//p 是一个指针变量 存放的是a的地址 int* 
	*p = 100;
	printf("%d\n", a);
	printf("%d\n", *p);
	printf("%d", sizeof(p));//32-4  64-8 地址的大小在当应的平台上是一样的 
	return 0;
}