#include<stdio.h>
int main()

{
	int a ;//a ��һ����ͨ�����α��� 
	scanf_s("%d", &a);
	int* p = &a;//p ��һ��ָ����� ��ŵ���a�ĵ�ַ int* 
	*p = 100;
	printf("%d\n", a);
	printf("%d\n", *p);
	printf("%d", sizeof(p));//32-4  64-8 ��ַ�Ĵ�С�ڵ�Ӧ��ƽ̨����һ���� 
	return 0;
}