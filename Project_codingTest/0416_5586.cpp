//#include <bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	string s;
//	cin >> s;
//	int len = s.length();
//	int joiCount = 0, ioiCount = 0;
//	for (int i = 1; i < len; i++)
//	{
//		if (s[i] == 'O' && s[i + 1] == 'I')
//		{
//			if (s[i - 1] == 'I') ioiCount++;
//			else if (s[i - 1] == 'J') joiCount++;
//		}
//	}
//	cout << joiCount << endl;
//	cout << ioiCount;
//}