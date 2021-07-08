//// n 개중 m 개를 선택하는 조합의 수 구하기
//#include <iostream>
//using namespace std;
//
//int getPowCount(int from, int select, int num);
//int getMin(int num1, int num2);
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//
//	cout << min(getPowCount(n, m, 2), getPowCount(n, m, 5)) << endl;
//}
//
//int getPowCount(int from, int select, int num)
//{
//	int count = 0;
//
//	for (int i = num; i <= from; i *= num)
//	{
//		count += from / i;
//	}
//	for (int i = num; i <= (from - select); i *= num)
//	{
//		count -= (from - select) / i;
//	}
//	for (int i = num; i <= select; i *= num)
//	{
//		count -= select / i;
//	}
//	return count;
//}
//
//int getMin(int num1, int num2)
//{
//	return num1 < num2 ? num1 : num2;
//}
//
//
//
////int calc(int n, int m, int &count)
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
////	return calc(n - 1, m - 1, count) + calc(n - 1, m, count);
////}