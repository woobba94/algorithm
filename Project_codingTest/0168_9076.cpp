//#include <iostream>
//using namespace std;
//
//void sort(int arr[]);
//int main()
//{
//	int t;
//	cin >> t;
//	int arr[5] = {};
//
//	int sum = 0;
//	while (t--)
//	{
//		for (int i = 0; i < 5; i++)
//		{
//			cin >> arr[i];
//			sum += arr[i];
//		}
//		sort(arr);
//
//		if (arr[1] - arr[3] >= 4)
//		{
//			cout << "KIN" << endl;
//		}
//		else
//		{
//			cout << sum - (arr[0] + arr[4]) << endl;
//		}
//		sum = 0;
//	}
//}
//
//void sort(int arr[])
//{
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j< 4; j++)
//		{
//			if (arr[j] < arr[j+1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//			
//		}
//	}
//}