//#include <iostream>
//using namespace std;
//
//bool isRight(int a, int b, int c);
//int main()
//{
//	int a, b, c;
//	while (1)
//	{
//		cin >> a >> b >> c;
//		if (a == 0 || b == 0 || c == 0) break;
//		if (isRight(a, b, c))
//		{
//			cout << "right" << endl;
//		}
//		else cout << "wrong" << endl;
//	}
//}
//
//bool isRight(int a, int b, int c)
//{
//	int A, B, C; // pow r
//	A = a * a, B = b * b, C = c * c;
//	if (A + B == C || A + C == B || B + C == A) return true;
//	else return false;
//}
//
////bool isRight(int a, int b, int c)
////{
////	int sum = 0;
////	if (a > b)
////	{
////		if (a > c)
////		{
////			sum = b * b + c * c;
////			if (a * a == sum) return true;
////			else return false;
////		}
////		else
////		{
////			sum = a * a + b * b;
////			if (c * c == sum) return true;
////			else return false;
////		}
////	}
////	else
////	{
////		if (b > c)
////		{
////			sum = a * a + c * c;
////			if (b * b == sum) return true;
////			else return false;
////		}
////		else
////		{
////			sum = a * a + b * b;
////			if (c * c == sum) return true;
////			else return false;
////		}
////	}
////}