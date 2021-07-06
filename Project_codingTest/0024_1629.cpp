//#include <iostream>
//
//using namespace std;
//long long calc(int a, int b, int c);
//int main()
//{
//	int a, b, c;
//	cin >> a >> b >> c;
//
//	cout << calc(a, b, c);
//}
//long long calc(int a, int b, int c)
//{
//	if (b == 0) 
//	{ 
//		return 1; 
//	}
//	else if (b == 1) 
//	{ 
//		return a % c; 
//	}
//	// b°¡ Â¦¼ö¸é ¹Ý¾¿ ³ª´®
//	else if (b % 2 == 0) 
//	{ 
//		return (calc(a, b / 2, c) * calc(a, b / 2, c)) % c;
//	}
//	else // È¦¼ö¸é b¸¦ Â¦¼ö·Î ¸¸µé°í(Áö¼ö -1), a °öÇØÁÜ
//	{
//		return (a * calc(a, b - 1, c)) % c;
//	}
//}