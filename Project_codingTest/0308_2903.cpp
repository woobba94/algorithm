//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//
//	int dp[16];
//	dp[0] = 2;
//	for (int i = 1; i <= n; i++)
//	{
//		dp[i] = dp[i - 1] * 2;
//	}
//
//
//	cout << (dp[n - 1] + 1) * (dp[n - 1] + 1);
//}