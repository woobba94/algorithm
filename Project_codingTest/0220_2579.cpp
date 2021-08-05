//#include <iostream>
//using namespace std;
//
//int getMax(int a, int b);
//int main()
//{
//	int n;
//	cin >> n;
//
//	int* arr = new int[n];
//	int* max = new int[n];
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//
//	max[0] = arr[0];
//	max[1] = arr[0] + arr[1];
//	max[2] = getMax(arr[0] + arr[2], arr[1] + arr[2]);
//
//	for (int i = 3; i < n; i++)
//	{
//		max[i] = getMax(max[i - 2] + arr[i], max[i - 3] + arr[i] + arr[i - 1]);
//	}
//	cout << max[n - 1];
//}
//
//int getMax(int a, int b)
//{
//	if (a < b)
//		return b;
//	return a;
//}