//#include <bits/stdc++.h>
//using namespace std;
//
//pair <bool, int> arr[1000];
//
//int main()
//{
//	int n, k;
//	cin >> n >> k;
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i].first >> arr[i].second;
//	}
//
//	int room12 = 0, room34girl = 0, room34boy = 0, room56girl = 0, room56boy = 0;
//	int count = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (arr[i].second == 1 || arr[i].second == 2)
//		{
//			if (room12 == 0) count++;
//			room12++;
//			if (room12 == k) room12 = 0;
//		}
//		// 여자
//		else if (arr[i].first == 0)
//		{
//			// 34학년
//			if (arr[i].second == 3 || arr[i].second == 4)
//			{
//				if (room34girl == 0) count++;
//				room34girl++;
//				if (room34girl == k) room34girl = 0;
//			}
//			else
//			{
//				if (room56girl == 0) count++;
//				room56girl++;
//				if (room56girl == k) room56girl = 0;
//			}
//		}
//		// 남자
//		else
//		{
//			// 34학년
//			if (arr[i].second == 3 || arr[i].second == 4)
//			{
//				if (room34boy == 0) count++;
//				room34boy++;
//				if (room34boy == k) room34boy = 0;
//			}
//			else
//			{
//				if (room56boy == 0) count++;
//				room56boy++;
//				if (room56boy == k) room56boy = 0;
//			}
//		}
//	}
//
//	cout << count;
//
//}