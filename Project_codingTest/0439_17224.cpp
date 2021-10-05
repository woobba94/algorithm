//#include <bits/stdc++.h>
//
//using namespace std;
//const int sub1Score = 100, sub2Score = 140;
//int main()
//{
//	int N, L, K;
//	cin >> N >> L >> K;
//	bool isVisit[100] = {};
//	pair <int, int> arr[100];
//	int count = 0;
//	int score = 0;
//	for (int i = 0; i < N && count < K; i++)
//	{
//		cin >> arr[i].first >> arr[i].second;
//		if(arr[i].second <= L)
//		{
//			isVisit[i] = true;
//			score += sub2Score;
//			count++;
//		}
//	}
//	for (int i = 0; i < N && count < K; i++)
//	{
//		if (arr[i].first <= L && isVisit[i] == false)
//		{
//			score += sub1Score;
//			count++;
//		}
//	}
//
//	cout << score;
//}