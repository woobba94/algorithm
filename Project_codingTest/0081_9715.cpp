//#include <iostream>
//using namespace std;
//
//int r, c;
//int calc(char arr[]);
//int main()
//{
//	int testCase = 0;
//	cin >> testCase;
//
//	while (testCase--)
//	{
//		char arr[80] = {};
//
//		cin >> arr;
//		cout << calc(arr) << endl;
//	}
//}
//
//int calc(char arr[])
//{
//	int sumVal = 0;
//	int score = 0;
//
//	for (int i = 0; i < 80; i++)
//	{
//		if (arr[i] == '\n') break;
//
//		if (arr[i] == 'O')
//		{
//			sumVal += 1;
//			score += sumVal;
//		}
//		else
//		{
//			sumVal = 0;
//		}
//	}
//	return score;
//}