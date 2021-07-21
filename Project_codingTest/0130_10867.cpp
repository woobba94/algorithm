//#include <iostream>
//using namespace std;
//
//bool checkOverlap(int* (&arr), int num, int size);
//void sort(int* (&arr), int size);
//int main()
//{
//	int n;
//	cin >> n;
//
//	int* arr = new int[n];
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//		if (checkOverlap(arr, arr[i], i))
//		{
//			i--;
//			n--;
//		}
//	}
//	sort(arr, n);
//	for (int i = 0; i < n; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	
//}
//
//bool checkOverlap(int* (&arr), int num, int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		if (arr[i] == num) return true;
//	}
//
//	return false;
//}
//
//void sort(int* (&arr), int size)
//{
//	int temp = 0;
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < size - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}