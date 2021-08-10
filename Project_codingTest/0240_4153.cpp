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
//		if (a == 0 && b == 0 && c == 0)
//			break;
//
//		if (a > c)
//		{
//			int temp = a;
//			a = c;
//			c = temp;
//		}
//
//		if (a > b)
//		{
//			int temp = a;
//			a = b;
//			b = temp;
//		}
//
//		if (b > c)
//		{
//			int temp = b;
//			b = c;
//			c = temp;
//		}
//
//		if (isRight(a, b, c))
//			cout << "right" << endl;
//		else
//			cout << "wrong" << endl;
//
//	}
//}
//
//bool isRight(int a, int b, int c)
//{
//	if (a * a + b * b == c * c)
//		return true;
//	return false;
//}