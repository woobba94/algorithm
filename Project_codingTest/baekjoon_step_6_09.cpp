//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//void func(vector <int> vec, int div, int n);
//int measure(int num1, int num2);
//
//int main()
//{
//	int n;
//	int div = 0;
//
//	cin >> n;
//	vector <int> vec(n, 0);
//
//	for (int i = 0; i < n; i++) 
//	{
//		cin >> vec[i];
//	}
//
//	func(vec, div, n);
//}
//
//void func(vector <int> vec, int div, int n)
//{
//	for (int i = 1; i < n; i++)
//	{
//		div = measure(vec[0], vec[i]); // 첫번째와 i번째의 최대공약수
//
//		cout << vec[0] / div << "/" << vec[i] / div << endl;
//	}
//}
//
////최대공약수 구하기
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