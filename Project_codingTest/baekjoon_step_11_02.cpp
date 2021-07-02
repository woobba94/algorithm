//#include <iostream>
//#include <vector>
//using namespace std;
//
//// 함수의 매개변수를 줄이기 위해 전역으로 선언
//vector <vector<int>> worker;
//vector <int> available(1001, 0);
//vector<bool> check(1001, false);
//
//
//bool func(int x);
//int main(int argc, char* argv[])
//{
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	int n, m;
//	int count = 0;
//	
//	cin >> n >> m;
//
//	for (int i = 1; i <= n; ++i) 
//	{
//		int num;
//		cin >> num;
//		for (int j = 0; j < num; ++j)
//		{
//			int temp;
//			cin >> temp;
//			worker[i].push_back(temp);
//		}
//	}
//
//	// 이분 매칭
//	for (int i = 1; i <= n; ++i) 
//	{
//		// 일 두개까지 가능
//		for (int j = 1; j <= 2; ++j) 
//		{
//			if (func(i) == true) 
//			{
//				count++;
//			}
//		}
//	}
//
//	cout << count << endl;
//
//	return 0;
//}
//
//bool func(int num)
//{
//	for (int i = 0; i < worker[num].size(); ++i)
//	{
//		int work = worker[num][i];
//		// 일이 이미 매칭된 경우 continue
//		if (check[work]) 
//		{
//			continue;
//		}
//		check[work] = true;
//
//		// 일이 아무도 매칭되어있지 않음 
//		// 또는 직원이 현재 일 외에 다른 일을 할 수 있는 경우 찾기
//		if (available[work] == 0 || func(available[work] == true)) 
//		{
//			available[work] = num;
//			return true;
//		}
//	}
//	return false;
//}