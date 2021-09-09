//#include <iostream>
//#include <string>
//#include <cmath>
//using namespace std;
//
//
//char base64[64] = { 'A','B','C','D','E','F','G','H','I','J',
//					'K','L','M','N','O','P','Q','R','S','T',
//					'U','V','W','X','Y','Z','a','b','c','d',
//					'e','f','g','h','i','j','k','l','m','n',
//					'o','p','q','r','s','t','u','v','w','x',
//					'y','z','0','1','2','3','4','5','6','7',
//					'8','9','+','/' };
//
//bool buffer[24];
//string encoding(string s);
//string decoding(string s);
//
//int main()
//{
//	while (1)
//	{
//		cout << "> Input mode (E : Encode, D : Decode, Q : Quit)" << endl;
//		char inputMode;
//		cin >> inputMode;
//		string input;
//		if (inputMode == 'Q')
//		{
//			return 0;
//		}
//		else if (inputMode == 'E')
//		{
//			cin >> input;
//			cout << "Result : " << encoding(input);
//		}
//		else if (inputMode == 'D')
//		{
//			cin >> input;
//			cout << "Result : " << decoding(input);
//		}
//		else
//		{
//			cout << "> inputModeError";
//		}
//		cout << endl;
//	}
//
//	
//}
//string encoding(string s)
//{
//	string returnStr = "";
//	int returnInt = 0;
//	bool isEmpty = true;
//	for (int i = 0; i < s.length(); i++)
//	{
//		int temp = s[i];
//		for (int k = (8 * ((i % 3) + 1)) - 1; k >= (i % 3) * 8; k--)
//		{
//			buffer[k] = temp % 2;
//			temp /= 2;
//		}
//		int cycle = 5;
//		// 버퍼 비우기
//		if ((i + 1) % 3 == 0 || i == s.length() - 1)
//		{
//			for (int j = 0; j < 24; j++)
//			{
//				if (buffer[j] == 1)
//				{
//					isEmpty = false;
//					returnInt += pow(2, cycle);
//					buffer[j] = 0;
//				}
//
//				if(!cycle)
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
//
//string decoding(string s)
//{
//	return "as";
//}