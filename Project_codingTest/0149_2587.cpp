//#include <iostream>
//using namespace std;
//
//const int SIZE = 5;
//
//int arr[SIZE];
//int getAvr();
//void sort();
//void swap(int& a, int& b);
//int main()
//{
//	for (int i = 0; i < SIZE; i++)
//	{
//		cin >> arr[i];
//	}
//	sort();
//	cout << getAvr() << endl;
//	cout << arr[2];
//}
//
//int getAvr()
//{
//	int sum = 0;
//	for (int i = 0; i < SIZE; i++)
//	{
//		sum += arr[i];
//	}
//	return sum / SIZE;
//}
//
//void sort()
//{
//	for (int i = 0; i < SIZE; i++)
//	{
//		for (int j = 0; j < SIZE - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				swap(arr[j], arr[j + 1]);
//			}
//		}
//	}
//}
//
//void swap(int &a, int &b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
