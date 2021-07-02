//#include <iostream>
//
//using namespace std;
//
//int getSum(int* arr, int count);
//
//int main()
//{
//
//	int capacity = 0, input;
//	cin >> capacity;
//
//	int* arr = new int[capacity];
//
//	for (int i = 0; i < capacity; i++)
//	{
//		cin >> input;
//		arr[i] = input;
//	}
//
//	for (int i = 0; i < capacity; i++)
//	{
//		if (i != 0) arr[i] = arr[i] * (i + 1) - getSum(arr, i);
//		cout << arr[i] << " ";
//	}
//
//	return 0;
//}
//
//int getSum(int* arr, int count)
//{
//	int sum = 0;
//	for (int i = 0; i < count; i++)
//	{
//		sum += arr[i];
//	}
//
//	return sum;
//}