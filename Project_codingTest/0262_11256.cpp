//#include <iostream>
//using namespace std;
//
//void sort(int* arr, int n);
//int main()
//{
//	int t;
//	cin >> t;
//	int j, n;
//	int x, y;
//	while (t--)
//	{
//		cin >> j >> n;
//		int* boxVolume = new int[n];
//		for (int i = 0; i < n; i++)
//		{
//			cin >> y >> x;
//			boxVolume[i] = x * y;
//		}
//		sort(boxVolume, n);
//		int boxCount = 0;
//
//		for (int i = 0; i < n; i++)
//		{
//			if (j == 0)
//				break;
//			if (j >= boxVolume[i])
//			{
//				boxCount++;
//				j -= boxVolume[i];
//			}
//			else
//			{
//				boxCount++;
//				j = 0;
//			}
//		}
//		cout << boxCount << endl;
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
//			if (arr[j] < arr[j + 1])
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}