//#include <iostream>
//using namespace std;
//
//int dp[50001] = {};
//int getMin(int a, int b);
//int main()
//{
//	int n;
//	cin >> n;
//
//	for (int i = 1; i <= n; i++)
//	{
//		dp[i] = i; // 1^2 으로만 이루어질 때(최대값)
//
//		for (int j = 1; j * j <= i; j++)
//		{
//			dp[i] = getMin(dp[i], dp[i - j * j] + 1);
//		}
//	}
//
//	cout << dp[n];
//}
//
//int getMin(int a, int b)
//{
//	if (a < b)
//		return a;
//	return b;
//}