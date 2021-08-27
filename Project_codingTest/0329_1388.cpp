//#include <iostream>
//using namespace std;
//const int MAX_SIZE = 101;
//int N, M, result = 0;
//bool isChecked[MAX_SIZE][MAX_SIZE] = {};
//char arr[MAX_SIZE][MAX_SIZE] = {};
//bool isRow = false;
//void dfs(int x, int y);
//int main()
//{
//	cin >> N >> M;
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < M; j++)
//		{
//			cin >> arr[i][j];
//		}
//	}
//	
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < M; j++)
//		{
//			if (isChecked[i][j] == false)
//			{
//				isChecked[i][j] = true;
//				result++;
//
//				if (arr[i][j] == '-' && j < M - 1)
//				{
//					if (isChecked[i][j + 1] == false)
//					{
//						isRow = true;
//						dfs(i, j + 1);
//					}
//				}
//				else if (arr[i][j] == '|' && i < N - 1)
//				{
//					if (isChecked[i + 1][j] == false)
//					{
//						isRow = false;
//						dfs(i + 1, j);
//					}
//				}
//			}
//		}
//	}
//
//	cout << result;
//}
//
//void dfs(int x, int y)
//{
//	if ((isRow && arr[x][y] == '|') || (!isRow && arr[x][y] == '-'))
//		return;
//
//	isChecked[x][y] = true;
//
//	if (arr[x][y] == '-' && y < M - 1 && !isChecked[x][y + 1])
//		dfs(x, y + 1);
//	else if (arr[x][y] == '|' && x < N - 1 && !isChecked[x + 1][y])
//		dfs(x + 1, y);
//}