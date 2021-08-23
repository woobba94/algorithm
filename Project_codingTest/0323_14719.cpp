//#include <iostream>
//using namespace std;
//
//int calc(int* arr, int h, int index, int size);
//int getMin(int a, int b);
//int main()
//{
//	int y, x;
//	cin >> y >> x;
//
//	int* arr = new int[x];
//	for (int i = 0; i < x; i++)
//	{
//		cin >> arr[i];
//	}
//
//	
//
//	int count = 0;
//	// 양쪽 가장자리는 빗물x
//	for (int i = 1; i < x - 1; i++)
//	{
//		count += calc(arr, arr[i], i, x);
//	}
//
//	cout << count;
//
//}
//
//int calc(int* arr, int h, int index, int size)
//{
//	int maxLeft = 0, maxRight = 0;
//
//	// 왼쪽 최대값 뽑기
//	for (int i = 0; i < index; i++)
//	{
//		if (maxLeft < arr[i]) maxLeft = arr[i];
//	}
//
//	// 오른쪽 최대값 뽑기
//	for (int i = index + 1; i < size; i++)
//	{
//		if (maxRight < arr[i]) maxRight = arr[i];
//	}
//	int min = getMin(maxLeft, maxRight);
//
//	if (min < h)
//		return 0;
//	else
//		return min - h;
//}
//
//int getMin(int a, int b)
//{
//	if (a < b) return a;
//	return b;
//}