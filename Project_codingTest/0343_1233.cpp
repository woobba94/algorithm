//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int a, b, c;
//	cin >> a >> b >> c;
//	int count[81] = {};
//
//	for (int i = 1; i <= a; i++)
//	{
//		for (int j = 1; j <= b; j++)
//		{
//			for (int k = 1; k <= c; k++)
//			{
//				count[i + j + k]++;
//			}
//		}
//	}
//	int maxCount = 0;
//	int maxSum = 0;
//	for (int i = 2; i < 81; i++)
//	{
//		if (maxCount < count[i])
//		{
//			maxCount = count[i];
//			maxSum = i;
//		}
//	}
//
//	cout << maxSum;
//}