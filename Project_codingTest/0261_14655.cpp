//#include <iostream>
//using namespace std;
//
//int getMaxSum(int* arr, int n);
//int getMinSum(int* arr, int n);
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
//	int score = getMaxSum(roundOne, n) - getMinSum(roundTwo, n);
//
//
//	cout << score;
//}
//
//int getMaxSum(int* arr, int n)
//{
//	int sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (arr[i] < 0)
//			arr[i] = -arr[i];
//		sum += arr[i];
//	}
//	return sum;
//}
//
//int getMinSum(int* arr, int n)
//{
//	int sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (arr[i] > 0)
//			arr[i] = -arr[i];
//		sum += arr[i];
//	}
//	return sum;
//}