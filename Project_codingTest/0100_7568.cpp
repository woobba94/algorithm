//#include <iostream>
//using namespace std;
//
//
//int main()
//{
//	int n;
//	cin >> n;
//	pair<int, int>* arr = new pair<int, int>[n];
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i].first >> arr[i].second;
//	}
//
//	// 일등으로 가정
//	int result = 1;
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			// 몸무게, 키 둘다 작으면
//			if (arr[i].first < arr[j].first && arr[i].second < arr[j].second)
//			{
//				// 등수 하락
//				result++;
//			}
//		}
//		cout << result << " ";
//		result = 1;
//	}
//}