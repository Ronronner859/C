//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	int arr[5] = { 1,3,4,5,2 };
//	//�Ƚ���������д�ӡ
//	cout << "����ǰ������" << " ";
//	for (int  i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
//	{
//		cout << arr[i] << " ";
//	}
//	
//	int start = 0;
//	int end = sizeof(arr) / sizeof(arr[0]) - 1;
//
//	while (start<end)
//	{
//		int temp = arr[start];
//		arr[start] = arr[end];
//		arr[end] = temp;
//		start++;
//		end--;
//	}
//	//��ӡ���ú����
//	cout << endl;
//	cout << "��������Ϊ��" << "";
//	for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
//	{
//		cout << arr[i] << " ";
//	}
//	system("pause");
//	return 0;
//}