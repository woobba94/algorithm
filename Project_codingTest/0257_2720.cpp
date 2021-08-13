//#include <iostream>
//using namespace std;
//int main()
//{
//	int t;
//	cin >> t;
//	int cent; // (1달러 = 100센트) (1<=C<=500)
//
//	
//
//
//
//	while (t--)
//	{
//		int q = 25, qCount = 0;
//		int d = 10, dCount = 0;
//		int n = 5, nCount = 0;
//		int p = 1, pCount = 0;
//		cin >> cent;
//
//		if (q <= cent)
//		{
//			qCount = cent / q;
//			cent %= q;
//		}
//
//		if (d <= cent)
//		{
//			dCount = cent / d;
//			cent %= d;
//		}
//
//		if (n <= cent)
//		{
//			nCount = cent / n;
//			cent %= n;
//		}
//
//		if (p <= cent)
//		{
//			pCount = cent / p;
//		}
//		
//		cout << qCount << " " << dCount << " " << nCount << " " << pCount << endl;
//	}
//}