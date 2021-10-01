//#include <bits/stdc++.h>
//#include <regex>
//using namespace std;
//
//string made, made2;
//string s1, s2, target;
//bool calc(string made);
//int main()
//{
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//	int t;
//	cin >> t;
//	int caseNum = 1;
//	while(t--)
//	{
//		cin >> s1 >> s2 >> target;
//		int len1 = s1.length(), len2 = s2.length();
//		int targetLen = target.length();
//		bool flag = true, flag2 = true;
//		int i = 0, j = 0;
//		while (1)
//		{
//			made += s1[i];
//			if (!calc(made))
//			{
//				made.pop_back();
//				made += s2[j];
//				if (!calc(made))
//				{
//					flag = false;
//					break;
//				}
//				else j++;
//			}
//			else i++;
//			if (i + j == targetLen)
//				break;
//		}
//		if (!flag)
//		{
//			made.clear();
//			i = 0, j = 0;
//			while (1)
//			{
//				made += s2[j];
//				if (!calc(made))
//				{
//					made.pop_back();
//					made += s1[i];
//					if (!calc(made))
//					{
//						flag2 = false;
//						break;
//					}
//					else i++;
//				}
//				else j++;
//				if (i + j == targetLen)
//					break;
//			}
//		}
//		cout << "Data set " << caseNum << ": " 
//			 << (flag || flag2 ? "yes\n" : "no\n");
//		caseNum++;
//		made.clear();
//	}
//}
//
//bool calc(string made)
//{
//	string temp = made + "(([A-Z]|[a-z])+)?";
//	if (regex_match(target, regex(temp)))
//		return true;
//	else return false;
//}