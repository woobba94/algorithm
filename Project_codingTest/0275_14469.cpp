//#include <iostream>
//using namespace std;
//class Pair
//{
//public:
//	int start, time;
//};
//void sort(Pair* arr, int n);
//int main()
//{
//	int n;
//	cin >> n;
//	Pair* arr = new Pair[n];
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i].start >> arr[i].time;
//	}
//	sort(arr, n);
//
//	int count = arr[0].start + arr[0].time;
//	
//
//	for (int i = 1; i < n; i++)
//	{
//		// 밀릴경우
//		if (count > arr[i].start)
//		{
//			arr[i].start = count;
//		}
//		count = arr[i].start + arr[i].time;
//	}
//
//	cout << count;
//
//}
//void sort(Pair* arr, int n)
//{
//	Pair temp;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n - 1; j++)
//		{
//			if (arr[j].start > arr[j + 1].start)
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}