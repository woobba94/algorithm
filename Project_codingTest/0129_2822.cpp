//#include <iostream>
//using namespace std;
//
//void sort(int (*score)[2]);
//int main()
//{
//	int score[8][2] = {};
//
//	for (int i = 0; i < 8; i++)
//	{
//		cin >> score[i][0];
//		score[i][1] = i + 1;
//	}
//
//
//	sort(score);
//
//	int sum = 0;
//	for (int i = 0; i < 5; i++)
//	{
//		sum += score[i][0];
//	}
//
//	cout << sum << endl;
//
//	for (int i = 0; i < 8; i++)
//	{
//		for (int j = 0; j < 7; j++)
//		{
//			if (score[j][1] > score[j + 1][1])
//			{
//				int temp = score[j][1];
//				score[j][1] = score[j + 1][1];
//				score[j + 1][1] = temp;
//			}
//		}
//	}
//
//	for (int i = 3; i < 8; i++)
//	{
//		cout << score[i][1] << " ";
//	}
//
//}
//
//void sort(int (*score)[2])
//{
//	for (int i = 0; i < 8; i++)
//	{
//		for (int j = 0; j < 7; j++)
//		{
//			if (score[j][0] < score[j + 1][0])
//			{
//				int temp = score[j][0];
//				score[j][0] = score[j + 1][0];
//				score[j + 1][0] = temp;
//
//				temp = score[j][1];
//				score[j][1] = score[j + 1][1];
//				score[j + 1][1] = temp;
//			}
//		}
//	}
//
//	for (int i = 5; i < 8; i++)
//	{
//		score[i][1] = -1;
//	}
//}