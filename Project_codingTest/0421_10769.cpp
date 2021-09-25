//#include <bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	string s;
//	getline(cin, s);
//	int len = s.length();
//	int happyCount = 0, sadCount = 0;
//	for (int i = 0; i < len - 2; i++)
//	{
//		if (s[i] == ':' && s[i + 1] == '-')
//		{
//			if (s[i + 2] == ')') happyCount++;
//			else if (s[i + 2] == '(') sadCount++;
//		}
//	}
//
//	if (happyCount || sadCount)
//	{
//		if (happyCount > sadCount) cout << "happy";
//		else if (happyCount < sadCount) cout << "sad";
//		else cout << "unsure";
//	}
//	else cout << "none";
//}