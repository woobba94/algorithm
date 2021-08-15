//#include <iostream>
//using namespace std;
//
//void quickSort(int* arr, int start, int end);
//int main()
//{
//	int n;
//	cin >> n;
//	int* arr = new int[n];
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//	quickSort(arr, 0, n - 1);
//
//	int count = 1;
//	for (int i = 0; i < n - 1; i++)
//	{
//		if (arr[i] == arr[i + 1])
//			count++;
//	}
//
//	cout << count;
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
//		while (i <= end && arr[i] > arr[pivot])
//		{
//			i++;
//		}
//		while (j > start && arr[j] < arr[pivot])
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