//#include <bits/stdc++.h>
//#include <regex>
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//	string tempPattern;
//	cin >> tempPattern;
//	int tempLen = tempPattern.length();
//	string left = "", right = "";
//	// 정규표현식 만들기위해 *을 기준으로 쪼개기
//	for (int i = 0; i < tempLen; i++)
//	{
//		if (tempPattern[i] == '*')
//		{
//			for (int j = 0; j < i; j++)
//				left += tempPattern[j];
//
//			for (int j = i + 1; j < tempLen; j++)
//				right += tempPattern[j];
//
//			break;
//		}
//	}
//	// 패턴 설정
//	// . 은 임의의 문자가 하나 존재한다는 패턴
//	// (.)+ 는 임의의 문자가 여러개 존재한다는 패턴
//	// ((.)+)? 는 (.)+ 패턴이 존재 or 미존재 패턴
//	regex pattern(left + "((.)+)?" + right);
//	while (n--)
//	{
//		string s;
//		cin >> s;
//		cout << (regex_match(s, pattern) ? "DA\n" : "NE\n");
//	}
//}