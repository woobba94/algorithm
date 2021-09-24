//#include <bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	int countA[26] = {}, countB[26] = {};
//	string a, b;
//	cin >> a >> b;
//	int len = a.length();
//	for (int i = 0; i < len; i++)
//	{
//		countA[a[i] - 'a']++;
//	}
//
//	len = b.length();
//	for (int i = 0; i < len; i++)
//	{
//		countB[b[i] - 'a']++;
//	}
//
//	int result = 0;
//	for (int i = 0; i < 26; i++)
//	{
//		result += abs(countA[i] - countB[i]);
//	}
//
//	cout << result;
//}