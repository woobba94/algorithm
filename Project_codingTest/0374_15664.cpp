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
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//	sort(arr, arr + n);
//
//	dfs(0, 0);
//
//}
//void dfs(int depth, int index)
//{
//	if (depth == m)
//	{
//		for (int i = 0; i < m; i++)
//		{
//			cout << result[i] << " ";
//		}
//		cout << '\n';
//		return;
//	}
//
//	int k = -1;
//	for (int i = index; i < n; i++)
//	{
//		if (!isVisited[i] && k != arr[i])
//		{
//			k = arr[i];
//
//			result[depth] = arr[i];
//			isVisited[i] = true;
//			dfs(depth + 1, i);
//			isVisited[i] = false;
//		}
//	}
//}