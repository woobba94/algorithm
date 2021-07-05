//#include <iostream>
//
//using namespace std;
//void sort(int* (&arr), int size);
//void reverseSort(int* (&arr), int size);
//int main()
//{
//	int size;
//	cin >> size;
//
//	int* A = new int[size];
//	int* B = new int[size];
//
//	for (int i = 0; i < size; i++)
//	{
//		cin >> A[i];
//	}
//	for (int i = 0; i < size; i++)
//	{
//		cin >> B[i];
//	}
//
//	sort(A, size);
//	reverseSort(B, size);
//
//	int result = 0;
//
//	for (int i = 0; i < size; i++)
//	{
//		result += A[i] * B[i];
//	}
//	cout << result;
//}
//
//void reverseSort(int* (&arr), int size)
//{
//	int temp = 0;
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < size - 1; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
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