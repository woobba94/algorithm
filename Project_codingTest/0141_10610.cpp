//#include <iostream>
//using namespace std;
//
//const int MAX_SIZE = 100001;
//char arr[MAX_SIZE] = {};
//void quickSort(char arr[], int start, int end);
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	int size = 0;
//
//	cin >> arr;
//
//	for (int i = 0; i < MAX_SIZE; i++)
//	{
//		if (arr[i] == '\0')
//		{
//			size = i;
//			break;
//		}
//			
//	}
//	int sum = 0;
//	bool includeZero = false;
//	for (int i = 0; i < size; i++) 
//	{
//		sum += (arr[i] - '0');
//
//		if (arr[i] == '0')
//			includeZero = true;
//	}
//
//	if (sum % 3 != 0 || includeZero == false)
//	{
//		cout << -1 << '\n';
//	}
//	else
//	{
//		quickSort(arr, 0, size - 1);
//		for (int i = size - 1; i >= 0; i--)
//		{
//			cout << arr[i];
//		}
//	}
//}
//
//
//void quickSort(char arr[], int start, int end)
//{
//	if (start >= end)return;
//	int temp;
//	int pivot = arr[(start + end) / 2];
//	int left = start;
//	int right = end;
//
//	while (left <= right)
//	{
//		while (arr[left] < pivot) left++;
//		while (arr[right] > pivot) right--;
//		if (left <= right)
//		{
//			temp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = temp;
//			left++;	right--;
//		}
//	}
//	quickSort(arr, start, right);
//	quickSort(arr, left, end);
//}