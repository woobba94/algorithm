//#include <iostream>
//using namespace std;
// 
//int main()
//{
//	int n;
//	cin >> n;
//
//	int count = 0;
//
//	if (5 <= n)
//	{
//		count += n / 5;
//
//		n %= 5;
//		if (n % 2 != 0)
//		{
//			count--;
//			n += 5;
//		}
//	}
//
//	if (2 <= n)
//	{
//		count += n / 2;
//		n %= 2;
//	}
//
//	if (n == 0 && count != 0)
//		cout << count;
//	else 
//		cout << -1;
//}