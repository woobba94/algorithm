//#include <iostream>
//using namespace std;
//
//int main() 
//{
//	int a, b, m;
//	cin >> a >> b >> m;
//	int resultSize = m;
//	// a -> 10
//	long long num = 0;
//	while (m--) 
//	{
//		int input;
//		cin >> input;
//		num = num * a + input;
//	}
//
//	int result[30] = {};
//	int index = 0;
//	// 10 -> b
//	while (num)
//	{
//		result[index] = (num % b);
//		num /= b;
//		index++;
//	}
//
//	for (int i = index - 1; i >= 0; i--)
//	{
//		cout << result[i] << " ";
//	}
//}