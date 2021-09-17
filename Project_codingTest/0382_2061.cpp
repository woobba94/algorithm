//#include <bits/stdc++.h>
//using namespace std;
//
//int getMod(string num, int primeNum);
//int main()
//{
//	string K;
//	int L;
//	cin >> K >> L;
//
//	int failNum = 0;
//	for (int i = 2; i < L; i++)
//	{
//		if (getMod(K, i) == 0)
//		{
//			failNum = i;
//			break;
//		}
//	}
//
//	if (failNum) cout << "BAD" << " " << failNum;
//	else cout << "GOOD";
//}
//
//int getMod(string num, int primeNum)
//{
//	int sum = 0;
//	int size = num.length();
//
//	for (int i = 0; i < size; i++)
//	{
//		sum = (sum * 10 + (num[i] - '0')) % primeNum;
//	}
//
//	return sum;
//}