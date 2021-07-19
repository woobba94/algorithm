//#include <iostream>
//using namespace std;
//// W로 시작하는 경우
//char startW[9][9] = {
//{ 'W','B','W','B','W','B','W','B' },
//{ 'B','W','B','W','B','W','B','W' },
//{ 'W','B','W','B','W','B','W','B' },
//{ 'B','W','B','W','B','W','B','W' },
//{ 'W','B','W','B','W','B','W','B' },
//{ 'B','W','B','W','B','W','B','W' },
//{ 'W','B','W','B','W','B','W','B' },
//{ 'B','W','B','W','B','W','B','W' } };
//
//// B로 시작하는 경우
//char startB[9][9] = {
//{ 'B','W','B','W','B','W','B','W' },
//{ 'W','B','W','B','W','B','W','B' },
//{ 'B','W','B','W','B','W','B','W' },
//{ 'W','B','W','B','W','B','W','B' },
//{ 'B','W','B','W','B','W','B','W' },
//{ 'W','B','W','B','W','B','W','B' },
//{ 'B','W','B','W','B','W','B','W' },
//{ 'W','B','W','B','W','B','W','B' } };
//char board[51][51] = {};
//int n, m;
//
//int getCount(int x, int y);
//
//int main()
//{
//	
//	cin >> n >> m;
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			cin >> board[i][j];
//		}
//	}
//	
//	// 최대 횟수 64
//	int minCount = 64;
//
//	for (int i = 0; i < n - 7; i++)
//	{
//		for (int j = 0; j < m - 7; j++)
//		{
//			if (minCount > getCount(i, j)) minCount = getCount(i, j);
//		}
//	}
//
//	cout << minCount;
//
//}
//
//// 시작 좌표 받고 필요 색칠 횟수 반환
//int getCount(int x, int y)
//{
//	int countW = 0;
//	int countB = 0;
//
//	for (int i = x; i < x + 8; i++)
//	{
//		for (int j = y; j < y + 8; j++)
//		{
//			if (startW[i - x][j - y] != board[i][j])
//			{
//				countW++;
//			}
//			if (startB[i - x][j - y] != board[i][j])
//			{
//				countB++;
//			}
//		}
//	}
//
//	// 더 작은 count 반환
//	if (countW > countB) return countB;
//	else return countW;
//}