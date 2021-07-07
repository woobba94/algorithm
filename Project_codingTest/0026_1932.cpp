//#include <iostream>
//using namespace std;
//int getMax(int a, int b);
//void calcRouteCount(int** (&arr), int& result, int n);
//int main()
//{
//	int n = 0;
//	cin >> n;
//	// n행을 저장할 2차원배열 선언
//	int** arr = new int*[n];
//
//	int result = 0;
//	// 초기화
//	for (int i = 0; i < n; i++)
//	{
//		arr[i] = new int[n];
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < i + 1; j++)
//		{
//			cin >> arr[i][j];
//		}
//	}
//
//	calcRouteCount(arr, result, n);
//	result += arr[0][0];
//	cout << result;
//}
//
//void calcRouteCount(int** (&arr), int& result, int n)
//{
//	for (int i = 2; i < n; i++) // 위에서 3층부터 계산. 
//	{
//		for (int j = 0; j < i + 1; j++) // 두번째 값부터 계산
//		{
//			if (j == 0)
//			{
//				arr[i][j] += arr[i - 1][j];
//			}
//			else if (j == i)
//			{
//				arr[i][j] += arr[i - 1][j - 1];
//			}
//			else
//			{
//				arr[i][j] += getMax(arr[i - 1][j - 1], arr[i - 1][j]);
//			}
//		}
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		if (result < arr[n - 1][i])
//		{
//			result = arr[n - 1][i];
//		}
//	}
//}
//
//int getMax(int a, int b)
//{
//	if (a > b) return a;
//	return b;
//}