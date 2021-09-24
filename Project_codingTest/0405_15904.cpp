//#include <bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	string s;
//	getline(cin, s);
//
//	int len = s.length();
//	int checkCount = 0;
//	for (int i = 0; i < len; i++)
//	{
//		if (checkCount == 4) break;
//		if (checkCount == 0 && s[i] == 'U') checkCount++;
//		else if (checkCount == 1 && s[i] == 'C') checkCount++;
//		else if (checkCount == 2 && s[i] == 'P') checkCount++;
//		else if (checkCount == 3 && s[i] == 'C') checkCount++;
//	}
//
//	if (checkCount == 4) 
//		cout << "I love UCPC";
//	else 
//		cout << "I hate UCPC";
//}