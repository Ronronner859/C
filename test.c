//二分查找 ：
//在一个有序的数组中找个某个具体的数
//找到了即返回该数的下标，没有找到就返回-1

#include<stdio.h>
              //本质是一个地址   --- 指针
int binary_search(int arr[], int k, int sz)
{
	int left = 0;
	int right = sz - 1;
	
	while (left<=right)
	{
		int mid = (left + right) / 2;
		if (arr[mid]<k)
		{
			left = mid + 1;
		}
		else if (arr[mid]>k)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
			
		}
	}
	return -1;
}


int main()
{
	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	int k = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	scanf_s("%d", &k);
	int ret = binary_search(arr, k, sz);//arr实际是数组首元素的地址
	if (ret == -1)
	{
		printf("找不到指定的数字\n");
	}
	else
	{
		printf("找到了该数字%d\n",ret);
	}
	return 0;
}