//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//void func(vector <vector<int>>(&level), int& result, int n);
//int main()
//{
//	int n = 0;
//	cin >> n;
//	// n행을 저장할 2차원벡터 선언
//	vector < vector <int> > level(n); 
//
//	int result = 0;
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < i + 1; j++)
//		{
//			int k = 0;
//			cin >> k;
//			level[i].push_back(k);
//		}
//	}
//	
//	func(level, result, n);
//	/*for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < i + 1; j++)
//		{
//			cout << level[i][j] << " ";
//		}
//		cout << endl;
//	}*/
//
//	result += level[0][0];
//	cout << result;
//}
//
//void func(vector <vector<int>> (&level), int &result, int n)
//{
//	for (int i = 2; i < n; i++) // 위에서 3층부터 계산. 
//	{
//		for (int j = 0; j < i + 1; j++) // 두번째 값부터 계산
//		{
//			if (j == 0)
//			{
//				level[i][j] += level[i - 1][j];
//			}
//			else if (j == i)
//			{
//				level[i][j] += level[i - 1][j - 1];
//			}
//			else
//			{
//				level[i][j] += max(level[i - 1][j - 1], level[i - 1][j]);
//			}
//		}
//	}
//
//	for (int i = 0; i < n; i++) 
//	{
//		if (result < level[n - 1][i]) 
//		{
//			result = level[n - 1][i];
//		}
//	}
//}
//
////int sum(vector <vector<int>>(&level), int i, int j)
////{
////	if((level[i][j] + level[i + 1][j]))
////	return level[i][j] + level[i + 1][j]
////}
//
//
