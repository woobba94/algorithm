//#include <iostream>
//
//using namespace std;
//
//void calc(int** (&dp), int n, int k);
//// [ N ,  K ] + [ N,  K+1 ] = [ N+1,  K+1 ]
//// [ N - 1 ,  K - 1 ] + [ N - 1,  K ] = [ N,  K ]
//int main()
//{
//	int n, k;
//	cin >> n >> k;
//	int** dp = new int*[n + 1];
//	
//	for (int i = 0; i <= n; i++)
//	{
//		dp[i] = new int[k + 1];
//	}
//	calc(dp, n, k);
//
//
//	cout << dp[n][k];
//}
//
//void calc(int** (&dp), int n, int k)
//{
//	if (n == 0)
//	{
//		cout << 0;
//		return;
//	}
//
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 0; j <= k; j++)
//		{
//			if (j == 0) dp[i][j] = 1;
//			else if (i == j) dp[i][j] = 1;
//			else dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
//
//			dp[i][j] = dp[i][j] % 10007;
//		}
//	}
//}