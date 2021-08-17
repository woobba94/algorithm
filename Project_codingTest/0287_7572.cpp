//#include <iostream>
//using namespace std;
//class Pair
//{
//public:
//	char first;
//	int second;
//};
//
//int main()
//{
//	char arr12[12] = { 'F','G','H','I','J','K','L','A','B','C','D','E' };
//	int arr10[10] = { 9, 0, 1, 2, 3, 4, 5, 6, 7, 8 };
//
//	Pair arr[60];
//	for (int i = 0; i < 60; i++)
//	{
//		arr[i].first = arr12[i % 12];
//		arr[i].second = arr10[i % 10];
//	}
//	int n, y;
//	cin >> n;
//	if (2013 <= n)
//	{
//		y = n - 2013;
//		y %= 60;
//	}
//	else
//	{
//		int temp = 2013;
//		while (1)
//		{
//			temp -= 60;
//			if (n > temp)
//			{
//				y = n - temp;
//				y %= 60;
//				break;
//			}
//		}
//	}
//	
//	cout << arr[y].first << arr[y].second;
//	
//}