//#include <iostream>
//using namespace std;
//
//class Pair
//{
//public:
//	int zeroCount = 0;
//	int oneCount = 0;
//};
//
//Pair dp[41] = {};
//void setData();
//int main()
//{
//	int t, n;
//	cin >> t;
//	setData();
//	while (t--)
//	{
//		cin >> n;
//		cout << dp[n].zeroCount << " " << dp[n].oneCount << endl;
//	}
//}
//
//void setData()
//{
//	dp[0].zeroCount = 1;
//	dp[0].oneCount = 0;
//
//	dp[1].zeroCount = 0;
//	dp[1].oneCount = 1;
//
//	for (int i = 2; i < 41; i++)
//	{
//		dp[i].oneCount = dp[i - 1].oneCount + dp[i - 2].oneCount;
//		dp[i].zeroCount = dp[i - 1].zeroCount + dp[i - 2].zeroCount;
//	}
//}