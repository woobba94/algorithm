//#include <iostream>
//using namespace std;
//
//int arr[8] = {};
//bool isAscending();
//bool isDescending();
//
//int main()
//{
//	for (int i = 0; i < 8; i++)
//	{
//		cin >> arr[i];
//	}
//
//	if (isAscending()) cout << "ascending";
//	else if (isDescending()) cout << "descending";
//	else cout << "mixed";
//}
//
//// 오름차순 이면 true
//bool isAscending()
//{
//	for (int i = 0; i < 7; i++)
//	{
//		if (arr[i] > arr[i + 1]) return false;
//	}
//
//	return true;
//}
//
//// 내림차순 이면 true
//bool isDescending()
//{
//	for (int i = 0; i < 7; i++)
//	{
//		if (arr[i] < arr[i + 1]) return false;
//	}
//
//	return true;
//}