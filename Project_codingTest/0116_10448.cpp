//#include <iostream>
//using namespace std;
//
//const int MAX_SIZE = 45;
//int dataArr[MAX_SIZE];
//void setData();
//bool isPossible(int num);
//int main()
//{
//	setData();
//	int testCase = 0;
//	cin >> testCase;
//	int num = 0;
//
//	while (testCase--)
//	{
//		cin >> num;
//
//		if (isPossible(num)) cout << 1 << endl;
//		else cout << 0 << endl;
//	}
//}
//
//bool isPossible(int num)
//{
//	for (int i = 1; i < MAX_SIZE; i++)
//	{
//		for (int j = 1; j < MAX_SIZE; j++)
//		{
//			for (int k = 1; k < MAX_SIZE; k++)
//			{
//				if (dataArr[i] + dataArr[j] + dataArr[k] == num)
//				{
//					return true;
//				}
//			}
//		}
//	}
//	return false;
//}
//
//void setData()
//{
//	for (int i = 0; i < MAX_SIZE; i++)
//	{
//		dataArr[i] = i * (i + 1) / 2;
//	}
//}