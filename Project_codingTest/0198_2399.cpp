//#include <iostream>
//using namespace std;
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
//	long long result = 0;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (arr[i] < arr[j])
//			{
//				result += arr[j] - arr[i];
//			}
//			else if (arr[j] < arr[i])
//			{
//				result += arr[i] - arr[j];
//			}
//		}
//	}
//
//	cout << result;
//}