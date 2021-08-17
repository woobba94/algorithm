//#include <iostream>
//#include <algorithm>
//using namespace std;
//bool compare(int a, int b);
//int main()
//{
//	int n;
//	cin >> n;
//	int* arr = new int[n - 1];
//
//	int m;
//	cin >> m;
//
//	for (int i = 0; i < n - 1; i++)
//	{
//		cin >> arr[i];
//	}
//
//	int count = 0;
//	if (n == 1)
//	{
//		cout << 0;
//		return 0;
//	}
//	else
//	{
//		while (1)
//		{
//			sort(arr, arr + n - 1, compare);
//			if (m <= arr[0])
//			{
//				count++;
//				m++;
//				arr[0]--;
//			}
//			else
//				break;
//		}
//		cout << count;
//	}
//}
//
//bool compare(int a, int b)
//{
//	return a > b;
//}