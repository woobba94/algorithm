//#include <iostream>
//using namespace std;
//
//int main()
//{
//	float num;
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		cin >> num;
//		cin.ignore();
//		char s[7];
//		cin.getline(s, 6);
//		for (int i = 0; i < 6; i++)
//		{
//			if (s[i] == '\0') break;
//			if (s[i] == '@')
//				num *= 3;
//			else if (s[i] == '%')
//				num += 5;
//			else if (s[i] == '#')
//				num -= 7;
//		}
//		cout << fixed;
//		cout.precision(2);
//		cout << num << endl;
//	}
//	
//
//}