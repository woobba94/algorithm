//#include<iostream>
//using namespace std;
//
//int getMin(int a, int b);
//int getPowCount(int from, int select, int num);
//
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//
//	int twoCount = getPowCount(n, m, 2);
//	int fiveCount = getPowCount(n, m, 5);
//
//	cout << getMin(twoCount, fiveCount) << endl;
//}
//
//int getPowCount(int from, int select, int num)
//{
//	int count = 0;
//	long long i = 0;
//
//	for (i = num; i <= from; i *= num)
//	{
//		count += from / i;
//	}
//	for (i = num; i <= (from - select); i *= num)
//	{
//		count -= (from - select) / i;
//	}
//	for (i = num; i <= select; i *= num)
//	{
//		count -= select / i;
//	}
//	return count;
//}
//
//int getMin(int a, int b)
//{
//	return a < b ? a : b;
//}