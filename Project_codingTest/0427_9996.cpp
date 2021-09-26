//#include <bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//	string pattern;
//	cin >> pattern;
//	int patternLen = pattern.length();
//	while (n--)
//	{
//		bool isDA = true;
//		string s;
//		cin >> s;
//		int len = s.length();
//		if (len < patternLen - 1)
//		{
//			cout << "NE\n";
//			continue;
//		}
//		// 왼쪽 검사
//		for (int j = 0; j < patternLen; j++)
//		{
//			if (pattern[j] == '*') break;
//			if (pattern[j] != s[j])
//			{
//				isDA = false;
//				break;
//			}
//		}
//		if (!isDA)
//		{
//			cout << "NE\n";
//			continue;
//		}
//		// 오른쪽 검사
//		for (int j = patternLen - 1; j >= 0; j--)
//		{
//			if (pattern[j] == '*') break;
//			if (pattern[j] != s[len - 1])
//			{
//				isDA = false;
//				break;
//			}
//			len--;
//		}
//		cout << (isDA ? "DA\n" : "NE\n");
//	}
//}