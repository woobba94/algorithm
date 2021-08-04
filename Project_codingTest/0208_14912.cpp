//#include <iostream>
//using namespace std;
//int calc(int num, int d);
//
//int main()
//{
//	int n;
//	cin >> n;
//	int d;
//	cin >> d;
//	int* arr = new int[n];
//	for (int i = 0; i < n; i++)
//	{
//		arr[i] = i + 1;
//	}
//	int result = 0;
//	for (int i = 0; i < n; i++)
//	{
//		result += calc(arr[i], d);
//	}
//
//	cout << result;
//}
//
//int calc(int num, int d)
//{
//	int count = 0;
//	while (num)
//	{
//		if (num % 10 == d)
//		{
//			count++;
//		}
//		num /= 10;
//	}
//
//	return count;
//}