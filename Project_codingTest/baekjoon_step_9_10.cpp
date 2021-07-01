//#include <iostream>
//#include <deque>
//
//using namespace std;
//
//void func(deque <pair<int, int>> que, int n, int m);
//int findMin(deque <pair<int, int>> que);
//int findMax(deque <pair<int, int>> que);
//int main()
//{
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//
//	int caseCount, n, m;
//    cin >> caseCount;
//    deque <pair<int, int>> que; // 정수 pair 형 큐 선언. 
//
//	for (int i = 0; i < caseCount; i++)
//	{
//		cin >> n >> m;
//		func(que, n, m);
//	}
//}
//
//void func(deque <pair<int, int>> que, int n, int m)
//{
//	int result = 0;
//	for (int j = 0; j < n; j++)
//	{
//		int tmp;
//		cin >> tmp;
//		pair<int, int> p(tmp, j);
//		que.push_back(p);
//	}
//	int min = findMin(que);
//	int max = findMax(que);
//	int count = 0;
//	while (true) 
//	{
//		// 최솟값과 최댓값이 같으면 우선순위 동일
//		if (min == max) break;
//
//		// 임시 변수에 첫번째 큐 저장 
//		pair <int, int> tmp = que.front();
//		// 첫번째 큐 팝
//		que.pop_front();
//		// 변수의 우선순위가 최댓값
//		if (tmp.first == max)
//		{
//			count++;
//			// 최댓값 갱신
//			max = findMax(que);
//			// 우선순위 최대면서 인덱스가 m이면
//			if (tmp.second == m)
//			{
//				result = count;
//			}
//		}
//		else 
//		{
//			que.push_back(tmp);
//		}
//	}
//	for (int j = 0; j < que.size(); j++)
//	{
//		count++;
//		int tmp = que.at(j).second;
//		// j번째 우선순위의 인덱스가 m이랑 같으면 인쇄
//		if (tmp == m) {
//			result = count;
//			break;
//		}
//	}
//	cout << result << endl;
//    
//}
//
//int findMin(deque <pair<int, int>> que) 
//{
//	int min = 10;
//	for (int i = 0; i < que.size(); i++) 
//	{
//		int tmp = que.at(i).first;
//		if (tmp <= min) 
//		{
//			min = tmp;
//		}
//	}
//	return min;
//}
//
//int findMax( deque <pair<int, int>> que) 
//{
//	int max = 0;
//	for (int i = 0; i < que.size(); i++) 
//	{
//		int tmp = que.at(i).first;
//		if (tmp >= max) 
//		{
//			max = tmp;
//		}
//	}
//	return max;
//}