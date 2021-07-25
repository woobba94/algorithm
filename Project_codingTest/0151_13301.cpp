//#include <iostream>
//using namespace std;
//
//long long dp[81];
//void setData();
//int main()
//{
//	int n;
//	cin >> n;
//
//	setData();
//	cout << (dp[n] * 2) + (dp[n - 1] + dp[n]) * 2;
//}
//
//void setData()
//{
//	dp[1] = 1;
//	dp[2] = 1;
//
//	for (int i = 3; i < 81; i++)
//	{
//		dp[i] = dp[i - 1] + dp[i - 2];
//	}
//}