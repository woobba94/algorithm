//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int numCount[10] = { 0, };
//	int result = 0; // a * b * c 의 최댓값은 10억
//
//	int a, b, c; // 100 <= A, B, C < 1000
//	cin >> a >> b >> c;
//
//	result = a * b * c;
//
//	while (result != 0)
//	{
//		numCount[result % 10]++;
//		result /= 10;
//	}
//
//	for (int i = 0; i < 10; i++)
//	{
//		cout << numCount[i] << endl;
//	}
//}