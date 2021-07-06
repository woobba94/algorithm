//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//bool isPrime(int num);
//void calc(int num, int a, int b);
//
//// 존재 유무 체크 변수
//bool isExist = false;
//int main()
//{
//	int input = 1;
//	int a = 0, b = 0;
//	
//	while (input != 0)
//	{
//		cin >> input;
//		
//		calc(input, a, b);
//
//	}
//}
//
//void calc(int num, int a, int b)
//{
//	for (int i = 1; i < num / 2; i++)
//	{
//		// 3부터 시작 (3, 5, 7, 9, ... )
//		a = 2 * i + 1; 
//		b = num - a;
//
//		// 찾은 두 수가 소수라면
//		if (isPrime(a) == true && isPrime(b) == true)
//		{
//			cout << num << " = " << a << " + " << b << endl;
//			isExist = true;
//			break;
//		}
//	}
//	if (isExist == false)
//	{
//		cout << "Goldbach's conjecture is wrong" << endl;
//	}
//}
//
//bool isPrime(int num)
//{
//	for (int i = 2; i <= sqrt(num); i++)
//	{
//		if (num % i == 0)
//		{
//			return false;
//		}
//	}
//	return true;
//}