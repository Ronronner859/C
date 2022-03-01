#include<stdio.h>
#define n 10

int main() {
	//杨辉三角
	int arr[n][n];
	int m = 0;
	int count = 0;
	for (int i = 0; i < n; i++) {//行
		for (int j = 0; j < i + 1; j++) {//列
			if (j == 0 || j == i) {//每行第一个和最后一个都为1
				arr[i][j] = 1;
				printf("%d\t", arr[i][j]);
			}
			else {
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
				printf("%d\t", arr[i][j]);
			}
		}
		printf("\n");
	}
	scanf_s("%d", & m);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i+1; j++)
		{
			if (m == arr[i][j])
			{
				
			}
		}

	}

	system("pause");
	return 0;
}
