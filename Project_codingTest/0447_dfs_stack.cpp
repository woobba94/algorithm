//#include <bits/stdc++.h>
//using namespace std;
//
//const int MAX_SIZE = 1000;
//
//vector <int> graph[MAX_SIZE];
//bool visited[MAX_SIZE];
//
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
//void dfs(int index) 
//{
//	// stack 에 들어가면 방문한거로 판단
//	// 해당 노드를 true로 해준다.
//	stack <int> s;
//	s.push(index);
//	visited[index] = true;
//	cout << index << " ";
//
//	while (!s.empty()) 
//	{
//		int currentNode = s.top();
//		s.pop();
//		for (int i = 0; i < graph[currentNode].size(); i++)
//		{
//			int nextNode = graph[currentNode][i];
//			if (visited[nextNode] == false) 
//			{
//				cout << nextNode << " ";
//				visited[nextNode] = true;
//				// pop()을 했었기 때문에 현재 currentNode도 넣어줘야함..
//				s.push(currentNode);
//				s.push(nextNode);
//				break;
//			}
//		}
//	}
//}