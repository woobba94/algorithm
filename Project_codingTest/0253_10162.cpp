//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int t;
//	cin >> t;
//	int a = 300, b = 60, c = 10;
//	int count5min = 0, count1min = 0, count10sec = 0;
//
//	if (a <= t)
//	{
//		count5min = t / a;
//		t %= a;
//	}
//
//	if (b <= t)
//	{
//		count1min = t / b;
//		t %= b;
//	}
//
//	if (c <= t)
//	{
//		count10sec = t / c;
//		t %= c;
//	}
//
//	if (t == 0)
//		cout << count5min << " " << count1min << " " << count10sec;
//	else
//		cout << -1;
//}