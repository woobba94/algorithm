//#include <iostream>
//#include <vector>
//using namespace std;
//
//
//int main()
//{
//	
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	int n = 0;
//
//	cin >> n; // 2 <= n <= 100,000
//	vector <pair<int, int>> vec(n);
//
//	// 2차원 vector 입력받기 pair<int, int>
//	for (int i = 0; i < vec.size(); i++)
//	{
//		int x = 0, y = 0;
//		cin >> x >> y;
//		vec.push_back({ x, y });
//	}
//
//	sort(vec); // x값 기준으로 정렬
//
//	int minDistance = getDistance(vec[0], vec[1]); // 초기 최솟값 설정
//
//	for (int i = 2; i < vec.size(); i++)
//	{
//		
//		for (int j = 0; j < vec.size() - 1; j++)
//		{
//			int newDistance = (int)sqrt(pow(vec[j].first - vec[j + 1].first, 2) +
//								   pow(vec[j].second - vec[j + 1].second, 2));
//			if (minDistance > newDistance)
//			{
//				minDistance = newDistance;
//			}
//		}
//	}
//
//	cout << pow(minDistance, 2);
//
//}
//
//int getDistance(pair<int, int> pointA, pair<int, int> pointB)
//{
//	return sqrt(pow(pointA.first - pointB.first, 2)
//			  + pow(pointA.second - pointB.second, 2));
//}
//
//int pow(int a, int n)
//{
//	while (n--)
//	{
//		if (n == 1) break;
//		a *= a;
//	}
//	return a;
//}
//
//void sort(vector<pair<int, int>>& vec)
//{
//	pair <int,int> temp;
//	for (int i = 0; i < vec.size(); i++)
//	{
//		for (int j = 0; j < vec.size() - 1; j++)
//		{
//			if (vec[j].first > vec[j + 1].first)
//			{
//				temp = vec[j];
//				vec[j] = vec[j + 1];
//				vec[j + 1] = temp;
//			}
//		}
//	}
//}