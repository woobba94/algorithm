//#include <iostream>
//#include <algorithm>
//using namespace std;
//int n, m;
//int arr[7] = {};
//int result[7] = {};
//void dfs(int depth);
//int main()
//{
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//	cin >> n >> m;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//	sort(arr, arr + n);
//
//	dfs(0);
//}
//
//void dfs(int depth)
//{
//	if (depth == m)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			cout << result[j] << " ";
//		}
//		cout << '\n';
//		return;
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		result[depth] = arr[i];
//		dfs(depth + 1);
//	}
//
//}