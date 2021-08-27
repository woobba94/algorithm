//#include <iostream>
//using namespace std;
//int n;
//int arr[3][3];
//bool isVisited[3][3];
//bool isPossible = false;
//void bfs(int i, int j);
//int main()
//{
//	cin >> n;
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cin >> arr[i][j];
//		}
//	}
//
//	bfs(0, 0);
//	if (isPossible) cout << "HaruHaru";
//	else cout << "Hing";
//}
//
//void bfs(int i, int j)
//{
//	isVisited[i][j] = true;
//	if (isPossible) return;
//
//	if (i >= n || j >= n)
//		return;
//
//	if (arr[i][j] == -1)
//	{
//		isPossible = true;
//		return;
//	}
//
//	// 오른쪽으로 이동
//	if (i < n)
//	{
//		if(!isVisited[i][j + arr[i][j]])
//			bfs(i, j + arr[i][j]);
//	}
//
//	// 아래로 이동
//	if (j < n)
//	{
//		if (!isVisited[i + arr[i][j]][j])
//			bfs(i + arr[i][j], j);
//	}
//}