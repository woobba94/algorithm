//#include <iostream>
//using namespace std;
//int dp[10000001] = {};
//void setData();
//int main()
//{
//	setData();
//	int n;
//	cin >> n;
//	cout << dp[n];
//}
//
//void setData()
//{
//	dp[0] = 1;
//	dp[1] = 1;
//	dp[2] = 2;
//	for (int i = 3; i <= 10000000; i++)
//	{
//		dp[i] = (dp[i - 1] % 10 + dp[i - 2] % 10) % 10;
//	}
//}