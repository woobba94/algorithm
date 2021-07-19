//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	char board[9][9] = {};
//	int count = 0;
//	for(int i = 0; i < 8; i++)
//	{
//		for (int j = 0; j < 8; j++)
//		{
//			cin >> board[i][j];
//			if (board[i][j] == 'F')			
//			{
//				// i, j µÑ´Ù È¦¼ö
//				if (i % 2 != 0 && j % 2 != 0)
//				{
//					count++;
//				}
//				// µÑ´Ù Â¦¼ö
//				else if (i % 2 == 0 && j % 2 == 0)
//				{
//					count++;
//				}
//			}
//		}
//	}
//	cout << count;
//}