//#include <iostream>
//using namespace std;
//
//int getDoubleCount(int arr[]);
//int main()
//{
//	int input = 0;
//	int index = 0;
//	while(1)
//	{
//		int arr[15] = {};
//		index = 0;
//		while (1)
//		{
//			cin >> input;
//
//			if (input == 0 || input == -1)
//				break;
//
//			arr[index] = input;
//			index++;
//		}
//
//		if (input == -1)
//			break;
//		cout << getDoubleCount(arr) << endl;
//	}
//}
//
//int getDoubleCount(int arr[])
//{
//	int count = 0;
//	for (int i = 0; i < 15; i++)
//	{
//		if (arr[i] == 0)
//			break;
//		for (int j = 0; j < 15; j++)
//		{
//			if (arr[i] * 2 == arr[j])
//			{
//				count++;
//				break;
//			}
//		}
//	}
//	return count;
//}