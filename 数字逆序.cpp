//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	int arr[5] = { 1,3,4,5,2 };
//	//先将五个数进行打印
//	cout << "逆序前的数：" << " ";
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
//	//打印逆置后的数
//	cout << endl;
//	cout << "逆序后的数为：" << "";
//	for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
//	{
//		cout << arr[i] << " ";
//	}
//	system("pause");
//	return 0;
//}