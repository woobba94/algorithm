//#include <iostream>
//#include <vector>
//using namespace std;
//
//void sortForEnd(vector <vector<int>>& timeTables);
//int counting(vector <vector<int>>& timeTables);
//int main()
//{
//	int n = 0; // (1 ≤ N ≤ 100,000)
//	int i = 0;
//	cin >> n;
//	vector <vector<int>> timeTables(n);
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < 2; j++)
//		{
//			int input = 0;
//			cin >> input;
//			timeTables[i].push_back(input);
//		}
//	}
//	sortForEnd(timeTables);
//	cout << counting(timeTables);
//}
//void sortForEnd(vector <vector<int>>& timeTables)
//{
//	vector <int> temp;
//	for (int i = 0; i < timeTables.size(); i++)
//	{
//		for (int j = 0; j < timeTables.size() - 1; j++)
//		{
//			if (timeTables[j][1] > timeTables[j + 1][1]) // 종료시간 기준 정렬
//			{
//				temp = timeTables[j];
//				timeTables[j] = timeTables[j + 1];
//				timeTables[j + 1] = temp;
//			}
//			else if (timeTables[j][1] == timeTables[j + 1][1]) // 종료시간 같으면 시작시간 기준정렬
//			{
//				if (timeTables[j][0] > timeTables[j + 1][0])
//				{
//					temp = timeTables[j];
//					timeTables[j] = timeTables[j + 1];
//					timeTables[j + 1] = temp;
//				}
//			}
//		}
//	}
//}
//int counting(vector <vector<int>>& timeTables)
//{
//	int time = timeTables[0][1]; // 기준이 될 시간 선언
//	int count = 1; // 회의실 배정 최소 1개
//	for (int i = 0; i < timeTables.size(); i++)
//	{
//		if (time <= timeTables[i][0])
//		{
//			count++;
//			time = timeTables[i][1]; // 기준 갱신
//		}
//	}
//	return count;
//}