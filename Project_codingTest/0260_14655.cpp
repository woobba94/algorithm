//#include <iostream>
//using namespace std;
//
//int getMin(int a, int b);
//int getMax(int a, int b);
//int getSum(int* arr, int n);
//int main()
//{
//	int n;
//	cin >> n;
//	int* roundOne = new int[n];
//	int* roundTwo = new int[n];
//	int round = 1;
//	while (1)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			if (round == 1)
//				cin >> roundOne[i];
//			else
//				cin >> roundTwo[i];
//		}
//
//		if (round == 2)
//			break;
//		round++;
//	}
//	
//	// Round 1
//	int target = 30000;
//	for (int i = 0; i < n - 2; i++)
//	{
//		if (roundOne[i] + roundOne[i + 1] + roundOne[i + 2] < target)
//		{
//			target = roundOne[i] + roundOne[i + 1] + roundOne[i + 2];
//		}
//	}
//	target = getMin(getMin(getMin(
//			roundOne[0], roundOne[n - 1]),
//			roundOne[0] + roundOne[n - 1]), target);
//
//	int score = getSum(roundOne, n) - target * 2;
//
//	// Round 2
//	target = -30000;
//	for (int i = 0; i < n - 2; i++)
//	{
//		if (roundTwo[i] + roundTwo[i + 1] + roundTwo[i + 2] > target)
//		{
//			target = roundTwo[i] + roundTwo[i + 1] + roundTwo[i + 2];
//		}
//	}
//	target = getMax(getMax(getMax(
//		roundTwo[0], roundTwo[n - 1]),
//		roundTwo[0] + roundTwo[n - 1]), target);
//
//	score = score - (getSum(roundTwo, n) - target * 2);
//
//	cout << score;
//}
//
//int getSum(int* arr, int n)
//{
//	int sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		sum += arr[i];
//	}
//	return sum;
//}
//
//int getMin(int a, int b)
//{
//	if (a < b)
//		return a;
//	return b;
//}
//
//int getMax(int a, int b)
//{
//	if (a < b)
//		return b;
//	return a;
//}