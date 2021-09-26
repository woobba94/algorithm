//#include <bits/stdc++.h>
//using namespace std;
//int main()
//{
//	string s;
//	cin >> s;
//	int len = s.length();
//	int nopCount = 0, upperCount = 0, smallCount = 0;
//	int lastIndex = 0;
//	for (int i = 0; i < len; i++)
//	{
//		if (s[i] <= 'Z')
//		{
//			upperCount++;
//			lastIndex = i;
//		}
//		else
//			smallCount++;
//	}
//
//	if (upperCount == 1) cout << 0;
//	else
//		cout << (upperCount - 1)*3 - smallCount + (len - 1 - lastIndex);
//	
//}