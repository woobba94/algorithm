//#include <iostream>
//
//using namespace std;
//int getResult(int num);
//int main()
//{
//	int n;
//	cin >> n;
//
//	cout << getResult(n);
//}
//
//int getResult(int num)
//{
//	int result = 0;
//
//
//	for (int i = sqrt(num); i > 0; i--)
//	{
//		if (i * i == num)
//		{
//			return 1;
//		}
//		else
//		{
//			num -= i * i;
//			result += getResult(num);
//		}
//	}
//
//	return result;
//}
//
//bool isPrime(int num)
//{
//	for (int i = 2; i < sqrt(num); i++)
//	{
//		if (num % i == 0) return false;
//	}
//
//	return true;
//}