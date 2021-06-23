//#include <iostream>
//using namespace std;
//
//bool isPrime(int num);
//int main()
//{
//	int n, count = 0;
//	int arr[100];
//	int idx = 0;
//	while (true)
//	{
//		cin >> n;
//		if (n == 0)break;
//		arr[idx] = n;
//		idx++;
//		
//	}
//	for (int i = 0; i < idx; i++)
//	{
//		count = 0;
//		for (int j = arr[i] + 1; j <= 2 * arr[i]; j++)
//		{
//			if (isPrime(j) == true) count++;
//		}
//		cout << count << endl;
//	}
//}
//
//bool isPrime(int num)
//{
//	if (num == 1) return false;
//	for (int i = 2; i <= sqrt(num); i++)
//	{
//		if (num % i == 0)return false;
//	}
//	return true;
//}