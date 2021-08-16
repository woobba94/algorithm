//#include <iostream>
//using namespace std;
//
//int dp[1001] = {};
//void setData(int k);
//int main()
//{
//	int n, k;
//	cin >> n >> k;
//	setData(k);
//
//	if (n < dp[k])
//		cout << -1;
//	else
//	{
//		if (k % 2 == 1)
//		{
//			cout << (k - 1) + (n % k);
//		}
//		else
//		{
//			cout << (k - 1) + (n % k) + (k / 2);
//		}
//	}
//
//}
//
//void setData(int k)
//{
//	dp[0] = 0;
//	dp[1] = 1;
//	for (int i = 2; i <= k; i++)
//	{
//		dp[i] = dp[i - 1] + i;
//	}
//}