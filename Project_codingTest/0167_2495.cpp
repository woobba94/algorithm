//#include <iostream>
//using namespace std;
//
//int getCount(char arr[]);
//int main()
//{
//	char arr[3][9] = {};
//
//	for (int i = 0; i < 3; i++)
//	{
//		cin >> arr[i];
//		cout << getCount(arr[i]) << endl;
//	}
//}
//
//int getCount(char arr[])
//{
//	int count = 1;
//	int result = 1;
//
//	for (int i = 0; i < 7; i++)
//	{
//		if (arr[i] == arr[i + 1])
//		{
//			count++;
//		}
//		else
//		{
//			if (result < count)
//			{
//				result = count;
//			}
//			count = 1;
//		}
//
//		if (i == 6)
//		{
//			if (result < count)
//			{
//				result = count;
//			}
//		}
//	}
//
//	return result;
//}