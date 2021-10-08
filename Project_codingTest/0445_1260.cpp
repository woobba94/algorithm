//#include <bits/stdc++.h>
//using namespace std;
//int n, m, v;
//vector <int> arr[1000] = {};
//bool visited[1000] = {};
//void DFS(int depth);
//int main()
//{
//	
//	cin >> n >> m >> v;
//
//	for (int i = 0; i < m; i++)
//	{
//		int start, end;
//		cin >> start >> end;
//		arr[start].push_back(end);
//	}
//
//	DFS(v);
//
//}
//
//void DFS(int depth)
//{
//	cout << depth;
//	visited[depth] = true;
//
//	for (int i = 0; i < n; i++)
//	{
//		if (!visited[i])
//		{
//			DFS(i);
//		}
//	}
//	
//}