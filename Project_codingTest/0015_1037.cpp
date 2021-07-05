//#include <iostream>
//
//using namespace std;
//int getMax(int* arr, int arrSize);
//int getMin(int* arr, int arrSize);
//void calc(int* arr, int arrSize);
//int main()
//{
//	int count = 0;
//	cin >> count;
//	int* arr = new int[count];
//
//	for (int i = 0; i < count; i++)
//	{
//		cin >> arr[i];
//	}
//	calc(arr, count);
//}
//
//void calc(int* arr, int arrSize)
//{
//	cout << getMax(arr, arrSize) * getMin(arr, arrSize);
//}
//
//int getMax(int* arr, int arrSize)
//{
//	int maxVal = 2;
//	for (int i = 0; i < arrSize; i++)
//	{
//		if (maxVal < arr[i])
//		{
//			maxVal = arr[i];
//		}
//	}
//
//	return maxVal;
//}
//
//int getMin(int* arr, int arrSize)
//{
//	int minVal = 1000000;
//	for (int i = 0; i < arrSize; i++)
//	{
//		if (arr[i] < minVal)
//		{
//			minVal = arr[i];
//		}
//	}
//
//	return minVal;
//}