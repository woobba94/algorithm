//#include <bits/stdc++.h>
//using namespace std;
//
//int n;
//vector <int> groupCount;
//bool arr[26][26] = {};
//bool visited[26][26] = {};
//int cnt = 0;
//
//void DFS(int x, int y);
//int main()
//{
//	string temp;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> temp;
//		for (int j = 0; j < n; j++)
//		{
//			arr[i][j] = temp[j] - '0';
//		}
//	}
//	
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			// 집이 있고 방문하지 않았다면
//			if (arr[i][j] && !visited[i][j]) 
//			{
//				cnt = 0;
//				DFS(i, j);
//				// 카운트 결과 저장
//				groupCount.push_back(cnt);
//			}
//		}
//	}
//
//	sort(groupCount.begin(), groupCount.end());
//
//	cout << groupCount.size() << endl;
//
//	for (int i = 0; i < groupCount.size(); i++)
//	{
//		cout << groupCount[i] << endl;
//	}
//	
//}
//
//void DFS(int x, int y)
//{
//	if (x < 0 || y < 0 || x >= n || y >= n || !arr[x][y] || visited[x][y]) 
//		return;
//	cnt++;
//	visited[x][y] = true;
//
//	DFS(x - 1, y); // 좌
//	DFS(x + 1, y); // 우
//	DFS(x, y - 1); // 아래
//	DFS(x, y + 1); // 위
//}