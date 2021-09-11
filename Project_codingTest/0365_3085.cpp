//#include <iostream>
//#include <algorithm>
//using namespace std;
//char board[51][51] = {};
//int n;
//int maxCount = 1;
//void calc(char (*arr)[51]);
//int main()
//{
//	
//	cin >> n;
//	
//	for (int i = 0; i < n; i++) 
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cin >> board[i][j];
//		}
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n - 1; j++)
//		{
//			if (board[i][j] != board[i][j + 1])
//			{
//				char temp = board[i][j];
//				board[i][j] = board[i][j + 1];
//				board[i][j + 1] = temp;
//
//				calc(board);
//
//				temp = board[i][j];
//				board[i][j] = board[i][j + 1];
//				board[i][j + 1] = temp;
//			}
//		}
//	}
//
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (board[i][j] != board[i + 1][j])
//			{
//				char temp = board[i][j];
//				board[i][j] = board[i + 1][j];
//				board[i + 1][j] = temp;
//
//				calc(board);
//
//				temp = board[i][j];
//				board[i][j] = board[i + 1][j];
//				board[i + 1][j] = temp;
//			}
//		}
//	}
//
//	cout << maxCount;
//}
//
//void calc(char (*arr)[51])
//{
//	for (int i = 0; i < n; i++)
//	{
//		int rowCount = 1;
//		for (int j = 0; j < n - 1; j++)
//		{
//			if (arr[i][j] == arr[i][j + 1])
//				rowCount++;
//			else
//			{
//				maxCount = max(maxCount, rowCount);
//				rowCount = 1;
//			}
//		}
//		maxCount = max(maxCount, rowCount);
//	}
//
//	for (int j = 0; j < n; j++)
//	{
//		int colCount = 1;
//		for (int i = 0; i < n - 1; i++)
//		{
//			if (arr[i][j] == arr[i + 1][j])
//				colCount++;
//			else
//			{
//				maxCount = max(maxCount, colCount);
//				colCount = 1;
//			}
//		}
//		maxCount = max(maxCount, colCount);
//	}
//}