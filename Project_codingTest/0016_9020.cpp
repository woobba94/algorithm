//#include <iostream>
//using namespace std;
//
//bool isPrime(int);
//void calc(int);
//
//int main()
//{
//	int caseCount = 0;
//	int n;
//	cin >> caseCount;
//
//	while (caseCount--)
//	{
//		cin >> n;
//		calc(n);
//	}
//}
//void calc(int num)
//{
//	for (int i = num / 2; i > 1; i--)
//	{
//		if (isPrime(i) == true)
//		{
//			if (isPrime(num - i) == true)
//			{
//				cout << i << " " << num - i << endl; 
//				break;
//			}
//		}
//	}
//}
//bool isPrime(int num)
//{
//	for (int i = 2; i <= sqrt(num); i++)
//	{
//		if (num % i == 0) return false;
//	}
//	return true;
//}