//#include <iostream>
//using namespace std;
//
//void sort(long long* arr, int n);
//int main()
//{
//	int n;
//	cin >> n;
//
//	long long* arr = new long long[n];
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//	sort(arr, n);
//	int i = 0;
//	int j = n - 1;
//	long long max = 0;
//
//	if (n % 2 != 0)
//	{
//		max = arr[0];
//		i = 1;
//	}
//		
//	
//	while (i < n)
//	{
//		if (max < arr[i] + arr[j])
//		{
//			max = arr[i] + arr[j];
//		}
//		j--;
//		i++;
//	}
//
//	cout << max;
//}
//
//void sort(long long* arr, int n)
//{
//	long long temp;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n - 1; j++)
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