//#include <bits/stdc++.h>
//using namespace std;
//const int ALPA_SIZE = 26;
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		bool isVisit[ALPA_SIZE] = {};
//		string s;
//		cin >> s;
//		int len = s.length();
//		for (int i = 0; i < len; i++)
//		{
//			isVisit[s[i] - 'A'] = true;
//		}
//		int result = 0;
//		for (int i = 0; i < ALPA_SIZE; i++)
//		{
//			if (!isVisit[i])
//				result += i + 'A';
//		}
//		cout << result << endl;
//	}
//}