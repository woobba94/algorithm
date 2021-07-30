//#include <iostream>
//using namespace std;
//int n, m; //  (2 ≤ N ≤ 1000, 1 ≤ M < N)
//
//int main()
//{
//	
//	cin >> n >> m;
//
//	int* arr = new int[m];
//	for (int i = 0; i < m; i++)
//	{
//		cin >> arr[i];
//	}
//	int sum = 0;
//
//	// 1이상 n이하
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			if (i % arr[j] == 0)
//			{
//				sum += i;
//				break;
//			}
//		}
//	}
//
//	cout << sum;
//}