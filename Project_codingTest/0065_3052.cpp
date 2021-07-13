//#include <iostream>
//
//using namespace std;
//const int MAX_SIZE = 10;
//int main()
//{
//	int arr[MAX_SIZE] = { 0, };
//	int count = 0;
//
//	for (int i = 0; i < MAX_SIZE; i++)
//	{
//		cin >> arr[i];
//		arr[i] %= 42;
//	}
//
//	for (int i = 0; i < MAX_SIZE; i++)
//	{
//		for (int j = 0; j < MAX_SIZE; j++)
//		{
//			if (i != j)
//			{
//				if (arr[i] == arr[j])
//					arr[i] = -1;
//			}
//		}
//	}
//
//	for (int i = 0; i < MAX_SIZE; i++)
//	{
//		if (arr[i] != -1)
//		{
//			count++;
//		}
//	}
//
//	cout << count;
//
//}