//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//
//void quickSort(int* arr, int start, int end);
//int main()
//{
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//	int n;
//	cin >> n;
//	int* arr = new int[n];
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//
//	sort(arr, arr + n);
//
//	for (int i = 0; i < n; i++)
//	{
//		cout << arr[i] << '\n';
//	}
//}
//
//void quickSort(int* arr, int start, int end)
//{
//	if (start >= end) // 원소가 1개인 경우 그대로 두기
//		return;
//	int temp;
//	int i = start + 1;
//	int j = end;
//
//	int pivot = start;
//
//	while (i <= j)
//	{
//		while (i <= end && arr[i] <= arr[pivot])
//		{
//			i++;
//		}
//
//		while (start < j && arr[j] >= arr[pivot])
//		{
//			j--;
//		}
//
//		if (i > j)
//		{
//			temp = arr[pivot];
//			arr[pivot] = arr[j];
//			arr[j] = temp;
//		}
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