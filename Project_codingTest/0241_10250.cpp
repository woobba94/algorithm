//#include <iostream>
//using namespace std;
//int h, w, n;
//
//void calc();
//int main()
//{
//	int t;
//	cin >> t;
//	
//	while (t--)
//	{
//		cin >> h >> w >> n;
//		calc();
//	}
//}
//
//void calc()
//{
//	int dep;
//	int c;
//	c = n % h;
//	dep = n / h;
//
//	if (0 < c)
//		dep++;
//
//	if (c == 0)
//	{
//		c = h;
//	}
//
//	cout << c * 100 + dep << endl;
//}