//#include<iostream>
//#include<cstring>
//using namespace std;
//const int maxn = 100000 + 10;
//void multiple(char str[], int n)
//{
//	int d = 0;
//	int length = strlen(str);
//	for (int i = 0; i < length; i++)
//	{
//		int t = n * (str[i] - '0') + d;
//		str[i] = t % 10 + '0';
//		d = t / 10;
//	}
//	while (d)
//	{
//		int t = d;
//		str[length++] = d % 10 + '0';
//		d /= 10;
//	}
//}
//void output(char str[])
//{
//	int length = strlen(str);
//	for (int i = length - 1; i >= 0; i--) cout << str[i];
//	cout << endl;
//}
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		char str[maxn] = "1";
//		for (int i = 1; i <= n; i++)
//			multiple(str, i);
//		output(str);
//	}
//	return 0;
//}