//#include <iostream>
//using namespace std;
//
//int getPow(int num, int q);
//int main()
//{
//	string N;
//	int B;
//
//	cin >> N >> B;
//
//	int target = 0;
//	int k = N.length();
//	int result = 0;
//	while (k--)
//	{
//		if(65 <= N[target])
//			result += (N[target] - 'A' + 10) * getPow(B, k);
//		else
//			result += (N[target] - '0') * getPow(B, k);
//		target++;
//	}
//	cout << result;
//}
//
//int getPow(int num, int q)
//{
//	int result = 1;
//	while (q--)
//	{
//		result *= num;
//	}
//	return result;
//}