//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int arr[8] = {};
//int result[8] = {};
//
//bool isVisited[8] = {};
//
//int n, m;
//void dfs(int depth);
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
//	dfs(0);
//}
//
//void dfs(int depth)
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
//	int k = -1;
//	for (int i = 0; i < n; i++)
//	{
//		if (!isVisited[i])
//		{
//			if (arr[i] != k)
//			{
//				isVisited[i] = true;
//				result[depth] = arr[i];
//				k = result[depth];
//				dfs(depth + 1);
//				isVisited[i] = false;
//			}
//		}
//	}
//}
