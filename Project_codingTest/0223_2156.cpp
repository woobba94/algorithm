//#include <iostream>
//using namespace std;
//
//int getMax(int a, int b);
//int main()
//{
//	int n;
//	cin >> n;
//	int* score = new int[n];
//	int* dp = new int[n];
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> score[i];
//	}
//
//	dp[0] = score[0];
//	dp[1] = score[0] + score[1];
//
//	for (int i = 2; i < n; i++)
//	{
//		dp[i] = getMax(getMax(
//			dp[i - 1],
//			dp[i - 3] + score[i - 1] + score[i]),
//			dp[i - 2] + score[i]);
//	}
//
//	cout << dp[n - 1];
//}
//
//int getMax(int a, int b)
//{
//	if (a < b)
//		return b;
//	return a;
//}