//指针数组： 数组用来存放指针的
#include<stdio.h>
int main()
{
	//int arr[10] = { 0 };//整型数组
	//char ch[5] = { 0 };//字符数组

	//int* parr[5];//用来存放整形指针的数组 --指针数组
	//char* par[4];//用来存放字符指针数组

	//int a = 10;
	//int b = 20;
	//int* arr[2] = { &a,&b };
	//int i = 0;
	//for ( i = 0; i < 2; i++)
	//{
	//	printf("%d ", *(arr[i]));
	//}
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 2,3,4,5,6 };
	int arr3[] = { 2,53,646,7,7 };
	int* parr[] = { arr1,arr2,arr3 };
	int i = 0;
	for ( i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0 ; j <  5; j++)
		{
			printf("%d ", *(parr[i] + j));
		}
		printf("\n");
	}
	return	0;
}
