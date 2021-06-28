//#include <iostream>
//#include <vector>
//using namespace std;
//
//
//int func(int cost, vector <int>& coins);
//int main()
//{
//	int n = 0, cost = 0;
//	cin >> n >> cost;
//	vector <int> coins(n);
//
//	while (n--)
//	{
//		int x = 0;
//		cin >> x;
//		coins.push_back(x);
//	}
//
//
//	cout << func(cost, coins);
//
//}
//
//
//int func(int cost, vector <int> &coins)
//{
//	int count = 0;
//	for (int i = coins.size() - 1; i >= 0; i--)
//	{
//		if (cost == 0) break;
//
//		if (cost >= coins[i])
//		{
//			count += cost / coins[i]; //4
//			cost %= coins[i];
//		}
//	}
//
//	return count;
//}