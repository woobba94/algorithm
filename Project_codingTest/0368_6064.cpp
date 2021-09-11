//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int getGDC(int a, int b);
//int getLCM(int a, int b);
//int calc(int m, int n, int x, int y, int maxCycle);
//int main()
//{
//	int t;
//	cin >> t;
//
//	int m, n, x, y;
//	while (t--)
//	{
//		cin >> m >> n >> x >> y;
//		int maxCycle = getLCM(max(m, n), min(m, n));
//		cout << calc(m, n, x, y, maxCycle) << endl;
//
//	}
//}
//
//int calc(int m, int n, int x, int y, int maxCycle)
//{
//	if (m == x && n == y) return maxCycle;
//	bool flag = false;
//
//	int i = x;
//
//	int count = x;
//
//	int j = x;
//	if (j > n)
//		if (j % n == 0)
//			j = n;
//		else
//			j %= n;
//
//	while (1)
//	{
//		maxCycle -= m;
//		if (maxCycle < 0) break;
//		if (j == y)
//		{
//			flag = true;
//			break;
//		}
//
//		j += m;
//		count += m;
//
//		if (j > n)
//			if (j % n == 0)
//				j = n;
//			else
//				j %= n;
//			
//	}
//
//	if (flag)
//		return count;
//	else
//		return -1;
//
//}
//int getGDC(int a, int b)
//{
//	if (b == 0) return a;
//
//	return getGDC(b, a % b);
//}
//
//int getLCM(int a, int b)
//{
//	return a * b / getGDC(a, b);
//}