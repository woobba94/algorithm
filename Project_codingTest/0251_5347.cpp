//#include <iostream>
//using namespace std;
//
//int getGCD(long long a, long long b);
//long long getLCM(long long a, long long b);
//int main()
//{
//	int t;
//	cin >> t;
//	long long a, b;
//	while (t--)
//	{
//		cin >> a >> b;
//
//		cout << getLCM(a, b) << endl;
//	}
//}
//int getGCD(long long a, long long b)
//{
//	if (b == 0)
//		return a;
//	return getGCD(b, a % b);
//}
//
//long long getLCM(long long a, long long b)
//{
//	return a * b / getGCD(a, b);
//}
//