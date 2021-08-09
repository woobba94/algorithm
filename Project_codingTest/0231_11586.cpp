//#include <iostream>
//using namespace std;
//
//char arr[101][101] = {};
//int n, k;
//void print();
//void reverseY();
//void reverseX();
//int main()
//{
//	
//	cin >> n;
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cin >> arr[i][j];
//		}
//	}
//
//	cin >> k;
//
//	if (k == 2)
//	{
//		reverseX();
//	}
//	else if (k == 3)
//	{
//		reverseY();
//	}
//	print();
//}
//
//void reverseY()
//{
//	for (int j = 0; j < n; j++)
//	{
//		int start = 0;
//		int end = n - 1;
//		while (1)
//		{
//			if (start >= end)
//				break;
//			char temp = arr[start][j];
//			arr[start][j] = arr[end][j];
//			arr[end][j] = temp;
//			start++;
//			end--;
//		}
//	}
//}
//
//void reverseX()
//{
//	for (int j = 0; j < n; j++)
//	{
//		int start = 0;
//		int end = n - 1;
//		while (1)
//		{
//			if (start >= end)
//				break;
//			char temp = arr[j][start];
//			arr[j][start] = arr[j][end];
//			arr[j][end] = temp;
//			start++;
//			end--;
//		}
//	}
//}
//
//void print()
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cout << arr[i][j];
//		}
//		cout << endl;
//	}
//}