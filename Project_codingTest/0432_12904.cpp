//#include<bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	string s, t;
//	cin >> s >> t;
//	int sLen = s.length();
//	int tLen = t.length();
//	bool flag = 0;
//	while (1)
//	{
//		if (tLen <= sLen) break;
//		if (t.back() == 'A') t.pop_back();
//		else
//		{
//			t.pop_back();
//			char temp;
//			int j = tLen - 2;
//			for (int i = 0; i < tLen; i++)
//			{
//				if (i >= j) break;
//				temp = t[i];
//				t[i] = t[j];
//				t[j] = temp;
//				j--;
//			}
//		}
//		tLen--;
//	}
//
//	cout << (s == t ? 1 : 0);
//}