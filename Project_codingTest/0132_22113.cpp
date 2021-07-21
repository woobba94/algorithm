//#include <iostream>
//using namespace std;
//
//int cost[100][100] = {};
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//
//	int* arr = new int[m];
//
//	for (int i = 0; i < m; i++)
//	{
//		cin >> arr[i];
//	}
//
//	// 요금 세팅
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cin >> cost[i][j];
//		}
//	}
//
//	int sum = 0;
//	for (int i = 0; i < m - 1; i++)
//	{
//		sum += cost[arr[i] - 1][arr[i + 1] - 1];
//	}
//
//	cout << sum;
//	
//
//}