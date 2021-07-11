//#include <iostream>
//
//using namespace std;
//int getGCD(int a, int b);
//void calc(int* arr, int size);
//int main()
//{
//	
//	int n;
//	cin >> n;
//	int* arr = new int[n];
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//
//	calc(arr, n);
//
//}
//
//void calc(int* arr, int size)
//{
//	int gcd = 1;
//	for (int i = 1; i < size; i++)
//	{
//		// 돌리는 원 반지름이 더 크면
//		if (arr[0] > arr[i])
//		{
//			gcd = getGCD(arr[0], arr[i]);
//		}
//		else
//		{
//			gcd = getGCD(arr[i], arr[0]);
//		}
//		cout << arr[0] / gcd << "/" << arr[i] / gcd << endl;
//	}
//}
//
//
//
//int getGCD(int a, int b)
//{
//	if (b == 0) return a;
//	return getGCD(b, a % b);
//}