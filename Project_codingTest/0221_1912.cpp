//#include <iostream>
//using namespace std;
//
//int getMax(int a, int b);
//int main()
//{
//	int n;
//	cin >> n;
//	int* arr = new int[n];
//	int* dp = new int[n];
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//
//	dp[0] = arr[0];
//	int max = dp[0];
//	for (int i = 1; i < n; i++)
//	{
//		dp[i] = getMax(dp[i - 1] + arr[i], arr[i]);
//		if (max < dp[i])
//		{
//			max = dp[i];
//		}
//	}
//	cout << max;
//
//}
//
//int getMax(int a, int b)
//{
//	if (a < b)
//		return b;
//	return a;
//}