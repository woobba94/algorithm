//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int sum = 0;
//	char input[51] = {};
//
//	cin >> input;
//
//
//	for (int i = 0; i < 50; i++)
//	{
//		if (input[i + 1] == '\0') break;
//
//		if (input[i] == '(')
//		{
//			if (input[i + 1] == '(')
//				sum += 5;
//			else sum += 10;
//		}
//		else // ' ) '
//		{
//			if (input[i + 1] == ')')
//				sum += 5;
//			else
//				sum += 10;
//		}
//	}
//
//	// Ã¹¹øÂ° ±×¸© ´õÇØÁÜ.
//	sum += 10;
//
//	cout << sum;
//
//}