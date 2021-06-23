//#include <iostream>
//using namespace std;
//
//bool isPrime(int num);
//
//int main()
//{
//	cout << "[M이상 N이하의 소수인 것을 골라 그 합과 최솟값 구하기]" << endl;
//	int m, n, min, sum = 0;
//	cout << "m입력: ";
//	cin >> m;
//	cout << "n입력: ";
//	cin >> n;
//	min = m;
//
//	for (int i = m; i <= n; i++) 
//	{
//		if (isPrime(i) == true)
//		{
//			sum += i;
//			if (min == m || min >= i)min = i;
//		}
//	}
//
//	if (sum == 0)
//	{
//		cout << -1;
//	}
//	else
//	{
//		cout << "합 : " << sum << endl;
//		cout << "최솟값 : " << min;
//	}
//}
//
//bool isPrime(int num) {
//	if (num <= 1) 
//	{
//		return false;
//	}
//	//소수 조건은 2보다 크면서 자기 자신의 제곱근까지의 수에 나눠지지 않는 것
//	for (int i = 2; i <= sqrt(num); i++) 
//	{
//		if (num % i == 0) //나눠지면
//		{
//			return false;
//		}
//	}
//	return true;
//}