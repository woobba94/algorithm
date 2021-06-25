//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int measure(int num1, int num2);
//int multiple(int num1, int num2);
//
//int main()
//{
//	int num1 = 0, num2 = 0;
//
//	cin >> num1 >> num2;
//
//	cout << measure(num1, num2) << endl; // 최대공약수
//	cout << multiple( num1, num2); // 최소공배수
//
//}
//
//// 최대공약수
//int measure(int num1, int num2)
//{
//	int result = 0;
//	if (num1 >= num2) result = num1;
//	else result = num2;
//	while (true)
//	{
//		if (num1 % result == 0 && num2 % result == 0) break;
//		result--;
//	}
//
//	return result;
//}
//
//// 최소공배수
//int multiple(int num1, int num2)
//{
//	int result = 1;
//
//	while (true)
//	{
//		if (result % num1 == 0 && result % num2 == 0) break;
//		result++;
//	}
//	return result;
//}