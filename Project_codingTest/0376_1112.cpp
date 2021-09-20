//#include <iostream>
//#include <cmath>
//using namespace std;
//
//string result;
//int x, base, d;
//void calc(int n);
//int main()
//{
//	cin >> x >> base;
//	if (!x)
//	{
//		cout << 0;
//		return 0;
//	}
//	calc(x);
//		
//	cout << result;
//}
//
//void calc(int n)
//{
//	if (0 < base && n < 0)
//	{
//		result += '-';
//		n *= -1;
//	}
//	if (n)
//	{
//		int temp = n / base;
//		if (base < 0 && n % base < 0)
//		{
//			temp++;
//		}
//		calc(temp);
//
//		d = n % base;
//		if(base < 0 && d < 0)
//		{
//			d += -base;
//		}
//		if (d <= 9)
//			result += (d + '0');
//		else result += d - 10 + 'A';
//	}
//}