//#include <iostream>
//
//using namespace std;
//
//void setData(unsigned int data[][101]);
//
//int main()
//{
//	unsigned int data[101][101] = { 0, };
//
//	setData(data);
//
//	//(5 ≤ n ≤ 100, 5 ≤ m ≤ 100, m ≤ n)
//	int n = 0, m = 0;
//
//	cin >> n >> m;
//
//	cout << data[n][m];
//}
//
//void setData(unsigned int data[][101])
//{
//	// 전처리
//	for (int i = 0; i <= 100; i++)
//	{
//		data[0][i] = 0;
//		data[i][0] = 1;
//		data[i][1] = i;
//	}
//	// 전처리 값으로 data 채우기
//	for (int i = 1; i <= 100; i++)
//	{
//		for (int j = 2; j <= 100; j++)
//		{
//			data[i][j] = data[i - 1][j - 1] + data[i - 1][j];
//		}
//	}
//}
//
////int calc(int n, int m)
////{
////	if (n == 0)
////		return 0;
////
////	if (m == 0)
////		return 1;
////
////	if (m == 1)
////		return n;
////
////	return calc(n - 1, m - 1) + calc(n - 1, m);
////}