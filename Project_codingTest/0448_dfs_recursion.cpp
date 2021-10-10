//#include <bits/stdc++.h>
//using namespace std;
//
//const int MAX_SIZE = 1000;
//
//vector <int> graph[MAX_SIZE];
//bool visited[MAX_SIZE];
//
//void dfs(int index);
//int main()
//{
//	int n, m, start;
//	cin >> n >> m >> start;
//
//	// visited[] 초기화
//	fill(visited, visited + MAX_SIZE, false);
//
//	for (int i = 0; i < m; i++) 
//	{
//		int x, y;
//		cin >> x >> y;
//
//		// 각 정점을 쌍으로 연결
//		graph[x].push_back(y);
//		graph[y].push_back(x);
//	}
//
//	for (int i = 1; i <= n; i++) 
//	{
//		sort(graph[i].begin(), graph[i].end());
//	}
//
//	dfs(start);
//
//}
//
//
//
//void dfs(int index) 
//{
//	// dfs에 들어오면 '방문'한거로 판단
//	// 해당 정점 true로 해준다.
//	visited[index] = true;
//	cout << index << " ";
//
//	for (int i = 0; i < graph[index].size(); i++) 
//	{
//		int next = graph[index][i];
//		
//		// 방문하지 않았다면
//		if (visited[next] == false) 
//		{
//			// 재귀함수 호출.
//			dfs(next);
//		}
//	}
//}