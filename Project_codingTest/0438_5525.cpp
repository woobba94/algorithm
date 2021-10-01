//#include <bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	int n, m;
//	string s;
//	cin >> n >> m >> s;
//
//	string pattern = "I";
//	for (int i = 0; i < n; i++)
//	{
//		pattern += "OI";
//	}
//
//	int pLen = pattern.length();
//	int count = 0;
//	for (int i = 0; i < m; i++)
//	{
//		if (s[i] == 'I')
//		{
//			if (pattern == s.substr(i, pLen))
//			{
//				count++;
//			}
//		}
//	}
//
//	cout << count;
//}