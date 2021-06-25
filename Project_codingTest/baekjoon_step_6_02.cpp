//#include <iostream>
//#include <vector>
//using namespace std;
//
//#define HINT 15746
//
//void func(vector <int>(&tileVec), int n);
//int main()
//{
//	
//	int n = 0;
//	cin >> n;
//
//	vector <int> tileVec(n);
//
//	func(tileVec, n);
//
//	cout << tileVec[n - 1] << endl;
//}
//
//
//void func(vector <int>(&tileVec), int n)
//{
//	int result = 0;
//	int afterCount = 0;
//	// vec 1 ~ 2 까지 사전 값 넣어줌 (0, 1, 2)
//	while (afterCount < 3)
//	{
//		tileVec[afterCount] = afterCount;
//		afterCount++;
//	}
//	for (int i = afterCount; i < n; i++)
//	{
//		tileVec[i] = (tileVec[i - 1] + tileVec[i - 2]);
//		// 문제 힌트 (15746으로 나눈 나머지를 출력) int 범위를 초과할 수 있기 때문.
//		tileVec[i] %= HINT;
//	}
//}