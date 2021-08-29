//#include <iostream>
//using namespace std;
//
//int getMax(int a, int b, int c, int d);
//int main()
//{
//	int n, strSize;
//
//	cin >> n >> strSize;
//
//	string *arr = new string[n];
//	
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//	string result;
//	int hammingCount = 0;
//	for (int i = 0; i < strSize; i++)
//	{
//		int a = 0, c = 0, g = 0, t = 0;
//		for (int j = 0; j < n; j++)
//		{
//			if (arr[j][i] == 'A') a++;
//			else if (arr[j][i] == 'C') c++;
//			else if (arr[j][i] == 'G') g++;
//			else t++;
//		}
//
//		if (getMax(a, c, g, t) == a) result.push_back('A');
//		else if (getMax(a, c, g, t) == c) result.push_back('C');
//		else if (getMax(a, c, g, t) == g) result.push_back('G');
//		else result.push_back('T');
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < strSize; j++)
//		{
//			if (arr[i][j] != result[j]) hammingCount++;
//		}
//	}
//	cout << result << endl;
//	cout << hammingCount;
//}
//
//int getMax(int a, int b, int c, int d)
//{
//	if (a < b)
//	{
//		if (b < c)
//		{
//			if (c < d)
//				return d;
//			else
//				return c;
//		}
//		else
//		{
//			if (b < d)
//				return d;
//			else
//				return b;
//		}
//	}
//	else
//	{
//		if (a < c)
//		{
//			if (c < d)
//				return d;
//			else
//				return c;
//		}
//		else
//		{
//			if (a < d)
//				return d;
//			else
//				return a;
//		}
//	}
//}