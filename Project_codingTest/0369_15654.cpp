//#include <iostream>
//#include <algorithm>
//using namespace std;
//int n, m;
//int arr[8] = {};
//void dfs(int depth);
//int result[8] = {};
//bool visited[8] = {};
//int main()
//{
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//	cin >> n >> m;
//
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
//	if (depth >= m)
//	{
//		for (int i = 0; i < m; i++)
//		{
//			cout << result[i] << " ";
//		}
//		cout << '\n';
//		return;
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		if (!visited[i])
//		{
//			visited[i] = true;
//			result[depth] = arr[i];
//			dfs(depth + 1);
//			visited[i] = false;
//		}
//	}
//}