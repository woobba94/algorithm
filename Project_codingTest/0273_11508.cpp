//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//bool compare(int a, int b);
//int main()
//{
//	int n;
//	cin >> n;
//	int* arr = new int[n];
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//
//	sort(arr, arr + n, compare);
//
//	int sum = 0;
//	int minusVal = 0;
//	for (int i = 0; i < n; i++)
//	{
//		sum += arr[i];
//		if ((i + 1) % 3 == 0)
//			minusVal += arr[i];
//	}
//	
//	cout << sum - minusVal;
//}
//
//bool compare(int a, int b)
//{
//	return a > b;
//}