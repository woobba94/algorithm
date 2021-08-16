//#include <iostream>
//using namespace std;
//
//bool isFinish(char arr[]);
//void swiching(char arr[], int n, int k);
//int main()
//{
//	char arr[1001] = {};
//	cin >> arr;
//	int n;
//	for (int i = 0; i < 1000; i++)
//	{
//		if (arr[i] == '\0')
//		{
//			n = i;
//			break;
//		}
//	}
//	int count = 0;
//	int num = 0;
//	while (1)
//	{
//		if (isFinish(arr))
//		{
//			cout << count;
//			break;
//		}
//		
//		if (arr[num] == 'Y')
//		{
//			count++;
//			swiching(arr, n, num);
//		}
//
//		num++;
//
//		if (num > n)
//		{
//			cout << -1;
//			break;
//		}
//	}
//}
//
//void swiching(char arr[], int n, int k)
//{
//	int index = 0;
//	if (k == 0)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			if (arr[i] == 'Y')
//				arr[i] = 'N';
//			else
//				arr[i] = 'Y';
//		}
//	}
//	else
//	{
//		index = k;
//		int d = k + 1;
//		while (1)
//		{
//			if (index > n - 1)
//				break;
//
//			if (arr[index] == 'Y')
//				arr[index] = 'N';
//			else
//				arr[index] = 'Y';
//
//			index += d;
//		}
//	}
//	
//}
//
//bool isFinish(char arr[])
//{
//	for (int i = 0; i < 1000; i++)
//	{
//		if (arr[i] == '\0')
//			break;
//		if (arr[i] == 'Y')
//			return false;
//	}
//	return true;
//}