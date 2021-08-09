//#include <iostream>
//using namespace std;
//
//int dp[100001] = {};
//int n;
//int getMax(int a, int b);
//void sort(int* arr);
//void quickSort(int* arr, int start, int end);
//
//int main()
//{
//
//	cin >> n;
//	int* arr = new int[n];
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//
//	quickSort(arr, 0, n - 1);
//	int k = 1;
//	dp[0] = arr[0] + k;
//	for (int i = 1; i < n; i++)
//	{
//		k++;
//		dp[i] = getMax(dp[i - 1], arr[i] + k);
//	}
//
//	cout << dp[n - 1] + 1;
//}
//
//int getMax(int a, int b)
//{
//	if (a < b)
//		return b;
//	return a;
//}
//
//void quickSort(int* arr, int start, int end)
//{
//	if (start >= end) // 원소가 1개인 경우 그대로 두기
//		return;
//
//	int pivot = start; // 피봇은 첫번째 원소
//	int i = start + 1;
//	int j = end;
//	int temp;
//
//	// 왼쪽인덱스 <= 오른쪽 일때
//	while (i <= j) 
//	{ 
//		// 피봇보다 작은 값 찾기
//		while (i <= end && (arr[i] >= arr[pivot])) 
//		{ 
//			i++;
//		}
//		// 피봇보다 큰 값 찾기
//		while (j > start && (arr[j] <= arr[pivot])) 
//		{ 
//			j--;
//		}
//
//		// 엇갈린 상태. 큰 값(j) <-> 피봇
//		if (i > j) 
//		{ 
//			temp = arr[j];
//			arr[j] = arr[pivot];
//			arr[pivot] = temp;
//		}
//		// 엇갈리지 않았다면 큰값(i) <-> 작은값(j)
//		else 
//		{ 
//			temp = arr[i];
//			arr[i] = arr[j];
//			arr[j] = temp;
//		}
//	}
//
//	quickSort(arr, start, j - 1);
//	quickSort(arr, j + 1, end);
//}
//
//void sort(int* arr)
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n - 1; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}