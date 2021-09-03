//#include <iostream>
//using namespace std;
//class Pair
//{
//public:
//	int first;
//	int second;
//};
//void sort(Pair arr[]);
//int main()
//{
//	Pair arr[3];
//
//	for (int i = 0; i < 3; i++)
//	{
//		cin >> arr[i].first >> arr[i].second;
//	}
//	sort(arr);
//
//	if ((arr[0].second - arr[0].first) - (arr[1].second - arr[1].first) ==
//		(arr[1].second - arr[1].first) - (arr[2].second - arr[2].first) ||
//		(arr[0].first == arr[1].first) && (arr[1].first == arr[2].first) ||
//		(arr[0].second == arr[1].second) && (arr[1].second == arr[2].second))
//	{
//		cout << "WHERE IS MY CHICKEN?";
//	}
//	else cout << "WINNER WINNER CHICKEN DINNER!";
//	
//}
//
//void sort(Pair arr[])
//{
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 2; j++)
//		{
//			if (arr[j].first > arr[j + 1].first)
//			{
//				Pair temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}