//#include <iostream>
//#include <algorithm>
//using namespace std;
//int dp[500001] = {};
//void quickSort(int* arr, int start, int end);
//int main()
//{
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//	int n;
//	cin >> n;
//	int* arr = new int[n];
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//	quickSort(arr, 0, n - 1);
//
//	int overlapCount = 0;
//	int count = 1;
//	for (int i = 0; i < n - 1; i++)
//	{
//		if (arr[i] == arr[i + 1])
//		{
//			dp[arr[i]]++;
//			if (overlapCount < dp[arr[i]])
//			{
//				overlapCount = dp[arr[i]];
//			}
//		}
//	}
//
//	cout << overlapCount + 1;
//}
//
//void quickSort(int* arr, int start, int end)
//{
//	if (start >= end)
//		return;
//	int i = start + 1;
//	int j = end;
//	int pivot = start;
//
//	while (i <= j)
//	{
//		while (i <= end && arr[i] <= arr[pivot])
//		{
//			i++;
//		}
//		while (j > start && arr[j] >= arr[pivot])
//		{
//			j--;
//		}
//
//		if (i > j)
//		{
//			int temp = arr[pivot];
//			arr[pivot] = arr[j];
//			arr[j] = temp;
//		}
//		else
//		{
//			int temp = arr[i];
//			arr[i] = arr[j];
//			arr[j] = temp;
//		}
//	}
//
//	quickSort(arr, start, j - 1);
//	quickSort(arr, j + 1, end);
//}