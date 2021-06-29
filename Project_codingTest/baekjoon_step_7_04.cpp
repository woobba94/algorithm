//#include <iostream>
//using namespace std;
//
//const int DIVISOR = 1000000007;
//int pactorial(int num);
//int cal(int n, int k);
//int main()
//{
//	int n = 0, k = 0;
//
//	cin >> n >> k;
//
//	cout << cal(n, k) % DIVISOR;
//}
//
//int cal(int n, int k)
//{
//	if (k < 0) return 0;
//	if (n < k) return 0;
//
//	return pactorial(n) / (pactorial(k) * pactorial(n - k));
//}
//
//int pactorial(int num)
//{
//	if (num < 0) return 0;
//	if (num == 1) return 1;
//
//	return num * pactorial(num - 1);
//}