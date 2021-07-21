//#include <iostream>
//using namespace std;
//
//int getScore(double x, double y);
//int main()
//{
//	int testCase = 0;
//	cin >> testCase;
//	pair <double, double> val[6];
//
//	while (testCase--)
//	{
//		// 2명의 좌표 받기 012, 345
//		for (int i = 0; i < 6; i++)
//		{
//			cin >> val[i].first >> val[i].second;
//		}
//		int player1 = 0;
//		int player2 = 0;
//		for (int i = 0; i < 6; i++)
//		{
//			if (i < 3) player1 += getScore(val[i].first, val[i].second);
//			else player2 += getScore(val[i].first, val[i].second);
//		}
//		cout << "SCORE: " << player1 << " to " << player2 << ", ";
//
//		if (player1 > player2)
//			cout << "PLAYER 1 WINS." << endl;
//		else if (player1 < player2)
//			cout << "PLAYER 2 WINS." << endl;
//		else
//			cout << "TIE." << endl;
//	}
//}
//
//int getScore(double x, double y)
//{
//	// 20점 통과
//	if ((x * x + y * y) <= 225)
//	{
//		// 40점 통과
//		if ((x * x + y * y) <= 144)
//		{
//			// 60점 통과
//			if ((x * x + y * y) <= 81)
//			{
//				// 80점 통과
//				if ((x * x + y * y) <= 36)
//				{
//					// 불스아이 100점
//					if ((x * x + y * y) <= 9)
//					{
//						return 100;
//					}
//					return 80;
//				}
//				return 60;
//			}
//			return 40;
//		}
//		return 20;
//	}
//	return 0;
//
//}