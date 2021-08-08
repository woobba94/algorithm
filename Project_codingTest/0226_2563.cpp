//#include <iostream>
//using namespace std;
//
//bool board[101][101] = {};
//
//void fillBoard(int x, int y);
//int main()
//{
//	// 색종이 수
//	int n;
//	cin >> n;
//
//	
//
//	int x, y;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> x >> y;
//		fillBoard(x, y);
//	}
//	
//	int count = 0;
//	for (int i = 1; i < 101; i++)
//	{
//		for (int j = 1; j < 101; j++)
//		{
//			if (board[i][j])
//				count++;
//		}
//	}
//
//	cout << count;
//}
//
//void fillBoard(int x, int y)
//{
//	for (int i = x; i < x + 10; i++)
//	{
//		for (int j = y; j < y + 10; j++)
//		{
//			board[i][j] = true;
//		}
//	}
//}