//#include <iostream>
//using namespace std;
//
//int getMin(int num1, int num2);
//void calc(int* dp, int n);
//
//int main()
//{
//	int n;
//	cin >> n;
//	int* dp = new int[n + 1]();
//	calc(dp, n);
//	delete[] dp;
//}
//
//void calc(int* dp, int n)
//{
//	for (int i = 2; i <= n; i++)
//	{		
//		dp[i] = dp[i - 1] + 1;
//		if (i % 2 == 0)
//		{
//			dp[i] = getMin(dp[i], dp[i / 2] + 1);
//		}
//		if (i % 3 == 0)
//		{
//			dp[i] = getMin(dp[i], dp[i / 3] + 1);
//		}
//	}
//	cout << dp[n];
//}
//
//int getMin(int num1, int num2)
//{
//	if (num1 < num2)
//		return num1;
//	else
//		return num2;
//}