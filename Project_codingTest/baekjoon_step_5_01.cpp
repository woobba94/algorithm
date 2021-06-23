//#include <iostream>
//using namespace std;
//
//void ascendingSort(int *(&arr), int size);
//int main()
//{
//	int n;
//	cin >> n;
//	int* arr = new int[n];
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//	ascendingSort(arr, n);
//	cout << "정렬완료:" << endl;
//	for (int i = 0; i < n; i++)
//	{
//		cout << arr[i] << endl;
//	}
//}
//
//// 오름차순 버블정렬
//void ascendingSort(int *(&arr), int size)
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
//	
//}