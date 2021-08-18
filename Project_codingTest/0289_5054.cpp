//#include <iostream>
//using namespace std;
//
//void sort(int* arr, int n);
//int main()
//{
//	int t;
//	cin >> t;
//	int n;
//	int* arr;
//	while (t--)
//	{
//		cin >> n;
//		arr = new int[n];
//		for (int i = 0; i < n; i++)
//		{
//			cin >> arr[i];
//		}
//		sort(arr, n);
//		int sum = 0;
//		int mid = (arr[0] + arr[n - 1]) / 2;
//		
//		sum = (mid - arr[0]) + (arr[n - 1] - arr[0]) + (arr[n - 1] - mid);
//
//		cout << sum << endl;
//	}
//}
//
//void sort(int* arr, int n)
//{
//	int temp;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n - 1; j++)
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