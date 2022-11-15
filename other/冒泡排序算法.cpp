#include<iostream>
using namespace std;
template<typename T>
void bubble_sort(T arr[], int len)
{
	int i, j;
	for ( i = 0; i < len; i++)
	{
		for ( j = 0; j < len - 1 - i; j++)
		{
			if (arr[j]>arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}

	}
}



int main()
{
	int arr[] = { 98,12,343,23,43,12,45,32,33,80 };
	int len = sizeof(arr) / sizeof(*arr);
	bubble_sort(arr, len);
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	float arrf[] = { 12.1,23.4,434.4,3.2 };
	len = sizeof(arrf) / sizeof(*arrf);
	bubble_sort(arrf, len);
	for (int i = 0; i < len; i++)
	{
		cout << arrf[i] << " " << endl;;
	}
	system("pause");
	return 0;
}