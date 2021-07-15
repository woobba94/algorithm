//#include <iostream>
//using namespace std;
//
//bool isPrime(int num);
//void calc();
//
//int m = 0, n = 0;
//long long sum = 0;
//int minPrime = 0;
//bool existPrime = false;
//
//int main()
//{
//	
//	cin >> m >> n;
//
//	calc();
//
//	if (existPrime == false) cout << -1;
//	else
//	{
//		cout << sum << endl;
//		cout << minPrime << endl;
//	}
//}
//
//void calc()
//{
//	bool flag = false;
//	for (int i = m; i < n + 1; i++)
//	{
//		if (isPrime(i) == true)
//		{
//			existPrime = true;
//			if (flag == false)
//			{
//				minPrime = i;
//				flag = true;
//			}
//			sum += i;
//		}
//	}
//}
//
//bool isPrime(int num)
//{
//	if (num == 1) return false;
//	for (int i = 2; i < num; i++)
//	{
//		if (num % i == 0) return false;
//	}
//	return true;
//}