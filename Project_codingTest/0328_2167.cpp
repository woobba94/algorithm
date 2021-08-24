//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	int arr[300][300] = {};
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			cin >> arr[i][j];
//		}
//	}
//
//	int k;
//	cin >> k;
//	int i, j, x, y;
//	while (k--)
//	{
//		cin >> i >> j >> x >> y;
//		int sum = 0;
//		for (int p = i - 1; p < x; p++)
//		{
//			for (int q = j - 1; q < y; q++)
//			{
//				sum += arr[p][q];
//			}
//		}
//		cout << sum << endl;
//	}
//}