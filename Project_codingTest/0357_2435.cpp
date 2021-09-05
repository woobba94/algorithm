//#include <iostream>
//using namespace std;
//
//
//int main()
//{
//	int n, k;
//
//	cin >> n >> k;
//
//	int arr[100];
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//	int maxSum = -10000;
//	for (int i = 0; i < n; i++)
//	{
//		int sum = 0;
//		bool flag = true;
//		for (int j = i; j < k + i; j++)
//		{
//			if (k + i > n)
//			{
//				flag = false;
//				break;
//			}
//			sum += arr[j];
//		}
//		if (flag && maxSum < sum)
//		{
//			maxSum = sum;
//		}
//	}
//	cout << maxSum;
//}