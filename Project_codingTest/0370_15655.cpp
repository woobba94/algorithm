//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int n, m;
//int arr[8] = {};
//int result[8] = {};
//bool isVisited[8] = {};
//void dfs(int depth, int index);
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
//	dfs(0, 0);
//}
//
//void dfs(int depth, int index)
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
//	for (int i = index; i < n; i++)
//	{
//		if (!isVisited[i])
//		{
//			isVisited[i] = true;
//
//			result[depth] = arr[i];
//			dfs(depth + 1, i + 1);
//
//			isVisited[i] = false;
//		}
//	}
//
//}