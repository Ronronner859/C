//���ֲ��� ��
//��һ��������������Ҹ�ĳ���������
//�ҵ��˼����ظ������±꣬û���ҵ��ͷ���-1

#include<stdio.h>
              //������һ����ַ   --- ָ��
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
	int ret = binary_search(arr, k, sz);//arrʵ����������Ԫ�صĵ�ַ
	if (ret == -1)
	{
		printf("�Ҳ���ָ��������\n");
	}
	else
	{
		printf("�ҵ��˸�����%d\n",ret);
	}
	return 0;
}