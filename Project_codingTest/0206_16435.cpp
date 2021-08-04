//#include <iostream>
//using namespace std;
//int n;
//
//void sort(int* arr);
//int main()
//{
//	
//	cin >> n;
//	int* arr = new int[n];
//	int l;
//	cin >> l;
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//	sort(arr);
//	for (int i = 0; i < n; i++)
//	{
//		if (arr[i] <= l)
//		{
//			l++;
//		}
//	}
//
//	cout << l;
//}
//
//void sort(int* arr)
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j< n-1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}