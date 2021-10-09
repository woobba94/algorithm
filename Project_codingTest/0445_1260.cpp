//#include <bits/stdc++.h>
//using namespace std;
//int n, m, v;
//vector <int> arr[1001] = {};
//bool visited[1001] = {};
//void DFS(int index);
//void BFS(int index);
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
//		arr[end].push_back(start);
//	}
//
//	for (int i = 1; i <= n; i++)
//	{
//		sort(arr[i].begin(), arr[i].end());
//	}
//
//	DFS(v);
//
//	for (int i = 0; i < 1001; i++)
//		visited[i] = false;
//
//	cout << endl;
//
//	BFS(v);
//
//}
//
//void DFS(int index)
//{
//	// 이미 방문한 경우 리턴
//	if (visited[index]) return;
//
//	// 방문처리
//	visited[index] = true;
//
//	cout << index << " ";
//
//	// 연결된 인접노드 차례대로 방문
//	for (int i = 0; i < arr[index].size(); i++)
//	{
//		DFS(arr[index][i]);
//	}
//	
//}
//
//void BFS(int index) 
//{
//	queue<int> q;
//	q.push(index);
//	visited[index] = true;
//
//	while (!q.empty()) 
//	{
//		int temp = q.front();
//		q.pop();
//
//		cout << temp << " ";
//
//		for (int i = 0; i < arr[temp].size(); i++) 
//		{
//			int next = arr[temp][i];
//			if (!visited[next]) 
//			{
//				q.push(next);
//				visited[next] = true;
//			}
//		}
//	}
//}