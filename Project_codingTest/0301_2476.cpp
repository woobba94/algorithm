//#include <iostream>
//using namespace std;
//
//int getMax(int a, int b);
//int main()
//{
//	int n;
//	cin >> n;
//	
//	int maxScore = 0;
//	for (int i = 0; i < n; i++)
//	{
//		int score = 0;
//		int num1, num2, num3;
//		cin >> num1 >> num2 >> num3;
//		if (num1 == num2 && num2 == num3)
//			score = 10000 + (num1 * 1000);
//		else if (num1 == num2 || num2 == num3)
//			score = 1000 + (num2 * 100);
//		else if (num1 == num3)
//			score = 1000 + (num1 * 100);
//		else
//			score = getMax(getMax(num1, num2), num3) * 100;
//
//		maxScore = getMax(maxScore, score);
//	}
//
//	cout << maxScore;
//}
//
//int getMax(int a, int b)
//{
//	if (a < b)
//		return b;
//	return a;
//}