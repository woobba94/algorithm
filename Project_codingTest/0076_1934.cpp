//#include <iostream>
//using namespace std;
//
//int getGCD(int a, int b);
//int main()
//{
//	int a = 0, b = 0;
//	int testCase = 0;
//	cin >> testCase;
//
//	while (testCase--)
//	{
//		cin >> a >> b;
//
//		cout << a * b / getGCD(a, b) << endl;
//	}
//}
//
//// 최대 공약수
//int getGCD(int a, int b)
//{
//	if (a < b)
//	{
//		int temp = a;
//		a = b;
//		b = temp;
//	}
//
//	if (b == 0) return a;
//
//	return getGCD(b, a % b);
//}