//#include <iostream>
//using namespace std;
//
//int getSize(int num);
//
//int main()
//{
//	int a, b;
//	cin >> a >> b;
//
//	int arr[7] = {};
//
//	// 큰 자리수 -> a
//	if (a < b)
//	{
//		int temp = a;
//		a = b;
//		b = temp;
//	}
//
//	int size = getSize(a);
//
//	int index = 0;
//	while (a)
//	{
//		arr[index] = a % 10;
//		a /= 10;
//		index++;
//	}
//
//	index = 0;
//	while (b)
//	{
//		arr[index] += b % 10;
//		b /= 10;
//		index++;
//	}
//
//	for (int i = size - 1; i >=0; i--)
//	{
//		cout << arr[i];
//	}
//
//}
//
//int getSize(int num)
//{
//	int size = 0;
//	while (num)
//	{
//		num /= 10;
//		size++;
//	}
//
//	return size;
//}
