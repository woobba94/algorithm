//#include <iostream>
//using namespace std;
//
//void sort(int arr[]);
//int main()
//{
//	int arr[10] = {};
//
//	int sum1 = 0;
//	int sum2 = 0;
//
//	for (int i = 0; i < 2; i++)
//	{
//		for (int k = 0; k < 10; k++)
//		{
//			cin >> arr[k];
//		}
//		sort(arr);
//		if(i == 0)
//			sum1 = arr[0] + arr[1] + arr[2];
//		else
//			sum2 = arr[0] + arr[1] + arr[2];
//	}
//
//	cout << sum1 << " " << sum2;
//	
//}
//
//
//void sort(int arr[])
//{
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 9; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}