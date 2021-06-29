//#include <iostream>
//#include <vector>
//using namespace std;
//
//// 중복 배제
//void expulsionOverlap(vector <pair<int, int>> &vec, int &x1, int &x2);
//int getLength(vector <pair<int, int>> vec);
//
//int main()
//{
//	int n = 0;
//	vector <pair<int, int>> vec(n);
//
//	cin >> n;
//
//	for (int i = 0; i < n; i++)
//	{
//		int x1, x2;
//		cin >> x1 >> x2;
//		// 새로 받는 좌표들이 기존 좌표(선) 내에 겹치지 않을때만 입력받음
//		expulsionOverlap(vec, x1, x2);
//	}
//
//	cout << getLength(vec);
//}
//
//void expulsionOverlap(vector <pair<int, int>> &vec, int &x1, int &x2)
//{
//	// 첫 입력
//	if(vec.size() == 0) vec.push_back({ x1,x2 });
//	for (int i = 0; i < vec.size(); i++)
//	{
//		// overlap all
//		if (vec[i].first <= x1 && x2 <= vec[i].second)
//		{
//			// 입력 x
//		}
//		// overlap x1
//		else if (vec[i].first <= x1 && x1 <= vec[i].second)
//		{
//			vec[i].second = x2;
//		}
//		// overlap x2
//		else if (vec[i].first <= x2 && x2 <= vec[i].second)
//		{
//			vec[i].first = x1;
//		}
//		// non overlap all
//		else
//		{
//			vec.push_back({ x1,x2 });
//		}
//	}
//}
//
//int getLength(vector <pair<int, int>> vec)
//{
//	int result = 0;
//
//	for (int i = 0; i < vec.size(); i++)
//	{
//		result += (vec[i].second - vec[i].first);
//	}
//
//	return result;
//}