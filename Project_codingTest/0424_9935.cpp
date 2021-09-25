//#include <bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//	vector <char> v;
//	string s, boom;
//	cin >> s >> boom;
//	int boomLen = boom.length();
//
//	bool isFind = false;
//
//	int sLen = s.length();
//	for (int i = 0; i < sLen; i++)
//	{
//		v.push_back(s[i]);
//		int tempBoomLen = boomLen;
//		if (s[i] == boom[--tempBoomLen])
//		{
//			isFind = true;
//			int vSize = v.size();
//			for (int j = vSize - 1; j >= vSize - boomLen; j--)
//			{
//				if (v[j] == boom[tempBoomLen--]) isFind = true;
//				else
//				{
//					isFind = false;
//					break;
//				}
//			}
//
//			if (isFind)
//			{
//				v.resize(vSize - boomLen);
//			}
//		}
//	}
//	int size = v.size();
//	if (size)
//	{
//		for (int i = 0; i < size; i++)
//		{
//			cout << v[i];
//		}
//	}
//	else cout << "FRULA";
//}