//#include <iostream>
//using namespace std;
//
//int getMax(int a, int b);
//int main()
//{
//	while (1)
//	{
//		int max = 0;
//		int a, b, c;
//		cin >> a >> b >> c;
//		if (a == 0 && b == 0 && c == 0) break;
//		max = getMax(getMax(a, b), c);
//
//		if (2 * max >= a + b + c) cout << "Invalid";
//		else
//		{
//			if (a == b && b == c) cout << "Equilateral";
//			else if (a == b || b == c || a == c) cout << "Isosceles";
//			else cout << "Scalene";
//		}
//		cout << endl;
//	}
//	
//}
//
//int getMax(int a, int b)
//{
//	if (a < b)
//		return b;
//	return a;
//}