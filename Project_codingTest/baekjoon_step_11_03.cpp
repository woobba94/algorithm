//#include <iostream>
//#include <deque>
//using namespace std;
//
//void calcCount(int num, int x, deque <int> que, int& count);
//void frontCheck(int x, deque <int>& que);
//
//int main()
//{
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//	int a = 64;
//	int x;
//	deque <int> que;
//	cin >> x;
//	int temp = a;
//	int count = 0;
//
//	while (1)
//	{
//		que.push_back(temp);
//		if (temp == 1) break;
//		temp /= 2;
//	}
//
//	calcCount(a, x, que, count);
//	cout << count << endl;
//
//	return 0;
//}
//
//void calcCount(int num, int x, deque <int> que, int& count)
//{
//	int size = que.size();
//
//	for (int i = 0; i < que.size() - 1; i++)
//	{
//		frontCheck(x, que);
//	}
//
//	int sum = 0;
//
//	while(1)
//	{
//		if (sum == x) return;
//		sum += que.front();
//		if (sum > x)
//		{
//			sum -= que.front();
//		}
//		else count++;
//		que.pop_front();
//	}
//}
//
//void frontCheck(int x, deque <int>& que)
//{
//	// x 보다 큰수 다 날림
//	if (que[0] > x)
//	{
//		que.pop_front();
//	}
//}