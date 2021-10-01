//#include<bits/stdc++.h>
//using namespace std;
//
//
//int main()
//{
//	while (1)
//	{
//		vector <char> arr;
//		string s;
//		getline(cin, s);
//		if (s[0] == '.') break;
//		int len = s.length();
//		int smallCount = 0, largeCount = 0;
//		bool flag = true;
//		for (int i = 0; i < len; i++)
//		{
//			if (s[i] == '(')
//				arr.push_back('(');
//			else if (s[i] == ')')
//			{
//				if (arr.size())
//				{
//					if (arr.back() == '(') arr.pop_back();
//					else flag = false;
//				}
//				else flag = false;
//			}
//			else if (s[i] == '[') 
//				arr.push_back('[');
//			else if (s[i] == ']')
//			{
//				if (arr.size())
//				{
//					if (arr.back() == '[') arr.pop_back();
//					else flag = false;
//				}
//				else flag = false;
//			}
//		}
//
//		if (!arr.empty()) flag = false;
//
//		cout << (flag ? "yes\n" : "no\n");
//	}
//}