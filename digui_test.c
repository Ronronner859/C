//递归 ：自己调用自身减少代码量 

#include<stdio.h>
#include<string.h>

//
//void print(int num)//1234
//{
//	if (num>9)
//	{
//		print(num / 10);//123 
//	}
//	printf("%d ", num % 10);
//}
//
//
//
//int main()
//{
//	unsigned int num = 0;
//	scanf_s("%d", &num);
//	print(num);
//	return 0;
//}
//int str_len(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
// 
int str_len(char* str)
{
	if (*str != '\0')//b 
	{
		return 1 + str_len(str+1); 
	}
	else
	{
		return 0;
	}
}

int main()
{
	char arr[] = "bit";
	//int len = strlen(arr);
	//printf("%d\n", len);
	int len = str_len(arr);
	printf("%d\n", len);
	return 0;
}