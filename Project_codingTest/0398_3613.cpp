//#include <bits/stdc++.h>
//using namespace std;
//int main()
//{
//	bool upperExist = false;
//	bool underBarExist = false;
//	bool doubleUnder = false;
//
//	string s;
//	cin >> s;
//	int len = s.length();	
//
//	// 문자열 분석
//	for (int i = 1; i < len; i++)
//	{
//		if (s[i] == '_')
//		{
//			if (s[i - 1] == '_') doubleUnder = true;
//			underBarExist = true;
//		}
//		else if (s[i] - 'a' < 0) upperExist = true;
//	}
//
//	// 예외처리
//	if ((underBarExist && upperExist) || doubleUnder || 
//		// 첫 자리 검증
//		(s[0] - 'a' < 0 || s[0] == '_' || s[len - 1] == '_'))
//	{
//		cout << "Error!";
//		return 0;
//	}
//
//	string result;
//	// c -> java
//	if (underBarExist)
//	{
//		for (int i = 0; i < len; i++)
//		{
//			if (s[i] == '_')
//			{
//				// _ 다음 알파벳을 대문자로 만듦
//				result += s[i + 1] + ('A' - 'a');
//				i++;
//			}
//			else result += s[i];
//		}
//	}
//	// java -> c
//	else
//	{
//		for (int i = 0; i < len; i++)
//		{
//			if (s[i] <= 'Z')
//			{
//				// 대문자 알파벳을 소문자로 만듦
//				result += '_';
//				result += s[i] + ('a' - 'A');
//			}
//			else result += s[i];
//		}
//	}
//	cout << result;
//}