//#include <iostream>
//
//using namespace std;
//
//int reverse(int num);
//int main()
//{
//	int x, y;
//	cin >> x >> y;
//
//	// Rev(Rev(X) + Rev(Y))
//	cout << reverse(reverse(x) + reverse(y));
//}
//
//int reverse(int num)
//{
//	int result = 0;
//	int i = 1000;
//	while (num / i == 0)
//	{
//		i /= 10;
//	}
//	while (num)
//	{
//		result += (num % 10) * i;
//
//		num /= 10;
//
//		i /= 10;
//	}
//
//	return result;
//}