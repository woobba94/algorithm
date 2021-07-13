//#include <iostream>
//
//using namespace std;
//int sum(int a, int b);
//
//int num = 0; //( 0 <= num <= 99 )
//int result = 0, cnt = 0;
//
//int main()
//{
//	cin >> num;
//	int check = num;
//	while (true)
//	{
//		// 기존 1의자리 -> 10의자리 + (10의자리 + 1의자리) 의 1의자리
//		num = (num % 10) * 10 + sum(num / 10, num % 10) % 10;
//		cnt++;
//
//		if (num == check) break;
//	}
//
//	cout << cnt;
//}
//
//int sum(int a, int b)
//{
//	return a + b;
//}
