//#include <iostream>
//using namespace std;
//
//int main()
//{
//	long long n;
//	cin >> n;
//
//	long long k = 10;
//
//	while (1)
//	{
//		if (k < n)
//		{
//			if (k / 2 - 1 < n % k)
//			{
//				n -= n % k;
//				n += k;
//			}
//			else
//			{
//				n -= n % k;
//			}
//		}
//		else
//			break;
//
//		k *= 10;
//	}
//	cout << n;
//}