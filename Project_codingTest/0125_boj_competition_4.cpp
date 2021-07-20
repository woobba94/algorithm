//#include <iostream>
//#include <vector>
//using namespace std;
//
//int n = 0; // 선물 개수
//int x; // 제한 시간
//vector <int> rails(1);
//bool calc(int gift);
//int getMinIndex();
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	
//	int railCount = 1;
//
//	cin >> n >> x;
//
//	int* arr = new int[n];
//
//	// n
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//
//
//	for (int i = 0; i < n; i++)
//	{
//		if (calc(arr[i]) == false)
//		{
//			i = -1;
//			fill(rails.begin(), rails.end(), 0);
//		}
//	}
//
//	cout << rails.size();
//	
//}
//
//bool calc(int gift)
//{
//	if (rails[getMinIndex()] + gift <= x)
//	{
//		rails[getMinIndex()] += gift;
//		return true;
//	}
//	else
//	{
//		rails.push_back(0);
//		return false;
//	}
//}
//
//int getMinIndex()
//{
//	int min = 1000000000;
//	int index = 0;
//	for(int i = 0; i < rails.size(); i++)
//	{
//		if (rails[i] < min)
//		{
//			min = rails[i];
//			index = i;
//		}
//			
//	}
//	return index;
//}