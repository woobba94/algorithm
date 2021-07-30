//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n, k;
//	cin >> n >> k;
//
//	int dp[30][30] = {};
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < i + 1; j++)
//		{
//			if (i == 0 || i == 1 || j == 0 || j == i) 
//				dp[i][j] = 1;
//			else
//			{
//				dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
//			}
//		}
//	}
//
//	cout << dp[n - 1][k - 1];
//}