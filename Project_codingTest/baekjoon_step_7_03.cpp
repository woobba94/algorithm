//#include <iostream>
//using namespace std;
//
//long long cal(long long a, long long b, int c);
//int main()
//{
//	long long a = 0, b = 0;
//	int c = 0;
//
//	cin >> a >> b >> c;
//
//	cout << cal(a, b, c) % c;
//	return 0;
//}
//
//
//long long cal(long long a, long long b, int c)
//{
//	if (b == 0) return 1;
//	else if (b == 1) return a % c;
//	else 
//	{
//		long long temp = cal(a, b / 2, c);
//		if (b % 2 == 0) // Â¦¼ö¸é
//		{
//			return (temp * temp) % c;
//		}
//		else
//		{
//			return (temp * temp * a) % c;
//		}
//	}
//}