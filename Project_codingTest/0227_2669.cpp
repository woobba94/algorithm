//#include <iostream>
//using namespace std;
//
//bool board[101][101] = {};
//
//class S
//{
//public:
//	int x1, x2, y1, y2;
//};
//
//void setBoard(int x1, int x2, int y1, int y2);
//int main()
//{
//	int n = 4; // 직사각형 갯수
//
//	S* arr = new S[n];
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i].x1 >> arr[i].y1 >> arr[i].x2 >> arr[i].y2;
//
//		setBoard(arr[i].x1, arr[i].x2, arr[i].y1, arr[i].y2);
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
//void setBoard(int x1, int x2, int y1, int y2)
//{
//	for (int i = x1; i < x2; i++)
//	{
//		for (int j = y1; j < y2; j++)
//		{
//			board[i][j] = true;
//		}
//	}
//}