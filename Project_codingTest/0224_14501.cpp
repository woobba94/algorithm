//#include <iostream>
//using namespace std;
//
//class Job
//{
//public:
//	int time = 0;
//	int pay = 0;
//};
//
//int getMax(int a, int b);
//int dp[16] = {};
//int main()
//{
//	int n;
//	cin >> n;
//	Job* arr = new Job[n + 1];
//
//	for (int i = 1; i < n + 1; i++)
//	{
//		cin >> arr[i].time >> arr[i].pay;
//	}
//
//	bool flag = false;
//
//	for (int i = n; i > 0; i--)
//	{
//		if (arr[i].time > n - i + 1)
//		{
//			dp[i] = dp[i + 1];
//		}
//		else
//		{
//			dp[i] = getMax(arr[i].pay + dp[i + arr[i].time], dp[i + 1]);
//		}
//	}
//
//	cout << dp[1];
//}
//
//int getMax(int a, int b)
//{
//	if (a < b)
//		return b;
//	return a;
//}