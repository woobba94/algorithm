//#include <iostream>
//using namespace std;
//int n, k;
//int result = 0;
//void dfs(int sum, int* arr);
//int main()
//{
//	
//	cin >> n >> k;
//
//	int* arr = new int[k];
//	for (int i = 0; i < k; i++)
//	{
//		cin >> arr[i];
//	}
//	dfs(0, arr);
//	cout << result;
//}
//
//void dfs(int sum, int* arr)
//{
//	if (sum > result)
//		result = sum;
//
//	for (int i = 0; i < k; i++)
//	{
//		if (sum * 10 + arr[i] <= n)
//			dfs(sum * 10 + arr[i], arr);
//	}
//}