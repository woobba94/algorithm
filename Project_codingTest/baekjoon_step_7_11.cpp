//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
// 	ios::sync_with_stdio(false);
//	cin.tie(0);
//	int n;
//	long long m = 0;
//
//	cin >> n >> m;
//
//	vector <pair<long long, long long>> vec(n);
//
//
//	for (int i = 0; i < n; i++)
//	{
//		long long start, end;
//		cin >> start >> end;
//
//		// 역방향 손님들만 저장
//		if (start > end)vec.push_back({ end, start });
//	}
//
//	sort(vec.begin(), vec.end());
//
//	long long from = vec[0].first;
//	long long to = vec[0].second;
//
//	for (int i = 0; i < vec.size(); i++)
//	{
//		// 저장된 목적지보다 새로운 출발지가 더 크면
//		if (to < vec[i].first)
//		{
//			m += (to - from) * 2;
//			from = vec[i].first;
//			to = vec[i].second;
//		}
//		// 저장된 목적지보다 새로운 목적지가 더 크면
//		else if (to < vec[i].second)
//		{
//			to = vec[i].second; // 목적지 갱신
//		}
//	}
//	m += 2 * (to - from);
//	cout << m;
//
//}