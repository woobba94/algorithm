//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int multiple(int num1, int num2);
//
//int main()
//{
//	int n = 0;
//	cin >> n;
//	vector <vector<int>> cases(n);
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < 2; j++)
//		{
//			int input = 0;
//			cin >> input;
//			cases[i].push_back(input);
//		}
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		cout << multiple(cases[i][0], cases[i][1]) << endl;
//	}
//}
//
//// 최소공배수
//int multiple(int num1, int num2)
//{
//	int result = 1;
//
//	while (true)
//	{
//		if (result % num1 == 0 && result % num2 == 0) break;
//		result++;
//	}
//	return result;
//}