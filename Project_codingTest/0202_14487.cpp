//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//	
//	int* cost = new int[n];
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> cost[i];
//	}
//
//	int max = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (max < cost[i])
//		{
//			max = cost[i];
//		}
//	}
//	int sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		sum += cost[i];
//	}
//	sum -= max;
//	cout << sum;
//}