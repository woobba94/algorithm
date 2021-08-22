//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//	int temp = n;
//	int count = 0;
//	// 자리수 (count) 뽑기
//	while (temp)
//	{
//		temp /= 10;
//		count++;
//	}
//	// 최대값 = count
//	int result = count;
//
//	// checkNum 뽑기
//	int checkNum = 0;
//	int k = 1;
//	while (count--)
//	{
//		checkNum += k;
//		k *= 10;
//	}
//
//	if (n < checkNum)
//		cout << result - 1;
//	else
//		cout << result;
//}