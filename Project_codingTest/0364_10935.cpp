//#include <iostream>
//#include <string>
//#include <cmath>
//using namespace std;
//char base64[65] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
//int buffer[24];
//string encoding(string s);
//int main()
//{
//	string input;
//	cin >> input;
//	cout << encoding(input);
//}
//
//string encoding(string s)
//{
//	string returnStr = "";
//	int returnInt = 0;
//	bool isEmpty = true;
//	for (int i = 0; i < s.length(); i++)
//	{
//		int temp = s[i];
//
//		for (int k = (8 * ((i % 3) + 1)) - 1; k >= (i % 3) * 8; k--)
//		{
//			buffer[k] = temp % 2 + 1;
//			temp /= 2;
//		}
//		int cycle = 5;
//		// 버퍼 비우기
//		if ((i + 1) % 3 == 0 || i == s.length() - 1)
//		{
//			for (int j = 0; j < 24; j++)
//			{
//				if (buffer[j] == 2)
//				{
//					isEmpty = false;
//					returnInt += pow(2, cycle);
//					buffer[j] = 0;
//				}
//				else if (buffer[j] == 1)
//				{
//					buffer[j] = 0;
//					isEmpty = false;
//				}
//
//				if (!cycle)
//				{
//					if (isEmpty)
//						returnStr += '=';
//					else
//					{
//						isEmpty = true;
//						returnStr += base64[returnInt];
//						returnInt = 0;
//					}
//					cycle = 5;
//					continue;
//				}
//
//				cycle--;
//			}
//		}
//	}
//
//	return returnStr;
//}