//#include <iostream>
//using namespace std;
//
//int main()
//{
//	string str;
//	cin >> str;
//
//	int num = 0;
//	for (int i = 0; i < str.length(); i++)
//	{
//		if (str[i] < 91)
//			num += str[i] - 'A' + 27;
//		else
//			num += str[i] - 'a' + 1;
//			
//	}
//	bool isPrime = true;
//	for (int i = 2; i < num; i++)
//	{
//		if (num % i == 0)
//		{
//			isPrime = false;
//			break;
//		}
//	}
//
//	if (isPrime)
//		cout << "It is a prime word.";
//	else
//		cout << "It is not a prime word.";
//}
