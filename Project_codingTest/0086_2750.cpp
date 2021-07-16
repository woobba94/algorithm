//#include <iostream>
//
//using namespace std;
//int n = 0; //N(1 ¡Â N ¡Â 1, 000)
//void sort(int* (&arr));
//int main()
//{
//	
//	cin >> n;
//
//	int* arr = new int[n];
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//
//	sort(arr);
//
//	for (int i = 0; i < n; i++)
//	{
//		cout << arr[i] << endl;
//	}
//}
//
//void sort(int* (&arr))
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n - 1; j++)
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