//#include <iostream>
//using namespace std;
//
//void checkCount(char arr[], int index, int count);
//int main()
//{
//	char arr[501];
//
//	cin >> arr;
//	int count = 0;
//	for (int i = 0; i < 500; i++)
//	{
//		if (arr[i] == 'X')
//		{
//			count++;
//		}
//		else
//		{
//			if (count % 2 != 0)
//			{
//				cout << -1;
//				return 0;
//			}
//
//			checkCount(arr, i - 1, count);
//			
//
//			if (arr[i] == '\0')
//			{
//				break;
//			}
//			count = 0;
//		}
//	}
//
//	for (int i = 0; i < 500; i++)
//	{
//		if (arr[i] == '\0') break;
//		cout << arr[i];
//	}
//}
//
//void checkCount(char arr[], int index, int count)
//{
//	int i = index - count + 1;
//
//	if (count % 4 == 0)
//	{
//		while (count)
//		{
//			arr[i] = 'A';
//			i++;
//			count--;
//		}
//	}
//	else
//	{
//		// 2 보다 크면
//		while (2 < count)
//		{
//			arr[i] = 'A';
//			i++;
//			count--;
//		}
//
//		while (count)
//		{
//			arr[i] = 'B';
//			i++;
//			count--;
//		}
//	}
//	
//}