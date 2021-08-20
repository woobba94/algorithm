//#include <iostream>
//using namespace std;
//
//int main()
//{
//	string a, b;
//	char m;
//
//	cin >> a;
//	cin >> m;
//	cin >> b;
//	if (a.length() < b.length())
//	{
//		string temp = a;
//		a = b;
//		b = temp;
//	}
//
//	if (m == '*')
//	{
//		cout << a;
//		int cycle = b.length() - 1;
//		while (cycle--)
//		{
//			cout << 0;
//		}
//	}
//	else
//	{
//		if (a == "1" && b == "1")
//		{
//			cout << 2;
//		}
//		else if(a.length() == b.length())
//		{
//			cout << (a[0] - '0') + (b[0] - '0');
//			for (int i = 1; i < a.length(); i++)
//			{
//				cout << a[i];
//			}
//		}
//		else
//		{
//			for (int i = 0; i < a.length() - b.length(); i++)
//			{
//				cout << a[i];
//			}
//			cout << b;
//		}
//	
//	}
//}