//#include <bits/stdc++.h>
//using namespace std;
//
//void calc(int n, int i);
//int main()
//{
//	string input;
//	cin >> input;
//	int len = input.length();
//
//	if (input[0] - '0' == 0)
//	{
//		cout << 0;
//		return 0;
//	}
//	
//	for (int i = 0; i < len; i++)
//	{
//		calc(input[i] - '0', i);
//	}
//
//}
//
//void calc(int n, int i)
//{
//	int index = 0;
//	if (i == 0 && n <= 3)
//	{
//		index = 1;
//		if (n == 1) index = 0;
//	}
//	else index = 2;
//
//	for (int i = index; i >= 0; i--)
//	{
//		if (n >= pow(2, i))
//		{
//			cout << 1;
//			n -= int(pow(2, i));
//		}
//		else cout << 0;
//	}
//}