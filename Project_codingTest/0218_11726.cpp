//#include <iostream>
//using namespace std;
//
//int dp[1001] = {};
//int n;
//void setData();
//int main()
//{
//
//	cin >> n;
//	setData();
//	cout << dp[n];
//}
//
//void setData()
//{
//	dp[1] = 1;
//	dp[2] = 2;
//	dp[3] = 3;
//	for (int i = 4; i <= n; i++)
//	{
//		dp[i] = (dp[i - 1] + dp[i - 2]) % 10007;
//	}
//}