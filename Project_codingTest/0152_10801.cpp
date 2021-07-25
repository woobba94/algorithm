//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int arrA[10] = {};
//	int arrB[10] = {};
//
//	bool aTurn = true;
//	for (int i = 0; i < 10; i++)
//	{
//		if (aTurn == true)
//		{
//			cin >> arrA[i];
//			if (i == 9)
//			{
//				aTurn = false;
//				i = -1;
//			}
//		}
//		else
//		{
//			cin >> arrB[i];
//		}
//	}
//	int score = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		if (arrA[i] > arrB[i])
//		{
//			score--;
//		}
//		else if (arrA[i] < arrB[i])
//		{
//			score++;
//		}
//	}
//
//	if (score < 0)
//		cout << "A";
//	else if (0 < score)
//		cout << "B";
//	else
//		cout << "D";
//
//
//}