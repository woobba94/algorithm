//#include <iostream>
//using namespace std;
//
//void input(int* arr, int size);
//void sort(int* arr, int size);
//int getMin(int a, int b);
//int getSumArr(int* arr, int size);
//int main()
//{
//	int b, c, d;
//	cin >> b >> c >> d;
//	int* bArr = new int[b];
//	int* cArr = new int[c];
//	int* dArr = new int[d];
//
//	int minCount = getMin(getMin(b, c), d);
//
//	input(bArr, b);
//	input(cArr, c);
//	input(dArr, d);
//
//	int result1 = getSumArr(bArr, b) + getSumArr(cArr, c) + getSumArr(dArr, d);
//	cout << result1 << endl;
//
//	sort(bArr, b);
//	sort(cArr, c);
//	sort(dArr, d);
//
//	cout << result1 - (getSumArr(bArr, minCount)
//		+ getSumArr(cArr, minCount)
//		+ getSumArr(dArr, minCount)) / 10;
//	
//}
//int getSumArr(int* arr, int size)
//{
//	int result = 0;
//	for (int i = 0; i < size; i++)
//	{
//		result += arr[i];
//	}
//	return result;
//}
//
//int getMin(int a, int b)
//{
//	if (a < b)
//		return a;
//	return b;
//}
//void sort(int* arr, int size)
//{
//	int temp;
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
//void input(int* arr, int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		cin >> arr[i];
//	}
//}