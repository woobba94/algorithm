//#include <iostream>
//using namespace std;
//
//void init(int* arr, int size);
//void swap(int& a, int& b);
//int main() 
//{
//	int n, m;
//	cin >> n >> m;
//
//	int* arr = new int[n + 1];
//
//	init(arr, n);
//
//	while (m--)
//	{
//		int i, j;
//		cin >> i >> j;
//		swap(arr[i], arr[j]);
//	}
//
//	for (int i = 1; i <= n; i++)
//	{
//		cout << arr[i] << " ";
//	}
//}
//
//void init(int* arr, int size)
//{
//	for (int i = 1; i <= size; i++)
//	{
//		arr[i] = i;
//	}
//}
//
//void swap(int &a, int &b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}