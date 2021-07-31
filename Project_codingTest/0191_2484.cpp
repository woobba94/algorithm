//#include <iostream>
//using namespace std;
//void sort(int input[]);
//bool isPerfact(int input[]);
//bool isTriple(int input[]);
//bool isDoublePair(int input[]);
//bool isOnePair(int input[]);
//int main()
//{
//	int n;
//	cin >> n;
//	int input[4] = {};
//	int maxScore = 0;
//	while (n--)
//	{
//		int result = 0;
//
//		for (int i = 0; i < 4; i++)
//		{
//			cin >> input[i];
//		}
//		sort(input);
//
//		if (isPerfact(input))
//		{
//			result = 50000 + (input[0] * 5000);
//		}
//		else if (isTriple(input))
//		{
//			result = 10000 + (input[1] * 1000);
//		}
//		else if (isDoublePair(input))
//		{
//			result = 2000 + (input[0] + input[2]) * 500;
//		}
//		else if (isOnePair(input))
//		{
//			for (int i = 0; i < 4; i++)
//			{
//				if (input[i] == input[i + 1])
//				{
//					result = 1000 + input[i] * 100;
//					break;
//				}
//			}
//		}
//		else
//		{
//			int max = 0;
//			for (int i = 0; i < 4; i++)
//			{
//				if (max < input[i])
//				{
//					max = input[i];
//				}
//			}
//			result = max * 100;
//		}
//
//		if (maxScore < result)
//		{
//			maxScore = result;
//		}
//	}
//
//	cout << maxScore;
//}
//
//// 4개가 같은지 검사
//bool isPerfact(int input[])
//{
//	for (int i = 0; i < 3; i++)
//	{
//		if (input[i] != input[i + 1])
//			return false;
//	}
//	return true;
//}
//
//// 3개 같은지 검사
//bool isTriple(int input[])
//{
//	int count = 1;
//	for (int i = 0; i < 3; i++)
//	{
//		if (input[i] != input[i + 1])
//		{
//			if (count == 3)
//				return true;
//			count = 1;
//		}
//		else
//			count++;
//	}
//	if (count == 3)
//		return true;
//	else return false;
//}
//
//// 2개 2개 같은지 검사
//bool isDoublePair(int input[])
//{
//	if (input[0] == input[1] && input[2] == input[3])
//		return true;
//	else return false;
//}
//
//// 2개 같은지 검사
//bool isOnePair(int input[])
//{
//	if (input[0] == input[1] || input[1] == input[2] || input[2] == input[3])
//		return true;
//	else return false;
//}
//
//void sort(int input[])
//{
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			if (input[j] < input[j + 1])
//			{
//				int temp = input[j];
//				input[j] = input[j + 1];
//				input[j + 1] = temp;
//			}
//		}
//	}
//}
