//#include <iostream>
//using namespace std;
//
//int k, n;
//void sort(int* arr);
//int main()
//{
//	cin >> k;
//	
//	for (int i = 0; i < k; i++)
//	{
//		cin >> n;
//		int* arr = new int[n];
//		int largestGap = 0;
//
//		for (int j = 0; j < n; j++)
//		{
//			cin >> arr[j];
//		}
//
//		sort(arr);
//		
//		for (int i = 0; i < n - 1; i++)
//		{
//			if (arr[i] - arr[i + 1] > largestGap)
//			{
//				largestGap = arr[i] - arr[i + 1];
//			}
//		}
//		cout << "Class " << i + 1 << endl;
//		cout << "Max " << arr[0] << ", Min " << arr[n - 1] << ", Largest gap " << largestGap << endl;
//
//	}
//}
//
//void sort(int* arr)
//{
//	int temp;
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
