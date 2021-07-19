//#include <iostream>
//using namespace std;
//
//// (1 ¡Â N ¡Â 100,000)
//int n;
//void sort(pair<int, int>* (&arr));
//void swap(int& a, int& b);
//int main()
//{
//	cin >> n;
//
//	// (-100,000 ¡Â xi, yi ¡Â 100,000) 
//	pair<int, int>* arr = new pair<int, int>[n];
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i].first >> arr[i].second;
//	}
//
//	sort(arr);
//
//	for (int i = 0; i < n; i++)
//	{
//		cout << arr[i].first << " " << arr[i].second << endl;
//	}
//}
//
//void sort(pair<int, int>* (&arr))
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n - 1; j++)
//		{
//			if (arr[j].first > arr[j + 1].first)
//			{
//					swap(arr[j], arr[j + 1]);
//			}
//			// xÁÂÇ¥ °°°í yÁÂÇ¥ ºñ±³
//			else if (arr[j].first == arr[j + 1].first &&
//					arr[j].second > arr[j + 1].second)
//			{
//				swap(arr[j], arr[j + 1]);
//			}
//		}
//	}
//}
//
//void swap(int &a, int &b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}