//#include <iostream>
//using namespace std;
//
//
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
//	int count = 0;
//	int minusVal = 0;
//	for (int i = n - 1; i > 0; i--)
//	{
//		if (arr[i] <= arr[i - 1])
//		{
//			minusVal = (arr[i - 1] - arr[i] + 1);
//			count += minusVal;
//			arr[i - 1] -= minusVal;
//		}
//	}
//
//	cout << count;
//}