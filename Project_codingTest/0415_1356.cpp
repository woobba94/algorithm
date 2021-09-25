//#include <bits/stdc++.h>
//using namespace std;
//int main()
//{
//	string num;
//	cin >> num;
//	int numLen = num.length();
//
//	bool isYes = false;
//	long long left;
//	long long right;
//	// i -> 나누는 기준
//	for (int i = 1; i < numLen; i++)
//	{
//		left = num[0] - '0';
//		for (int j = 1; j < i; j++)
//		{
//			left *= (num[j] - '0');
//		}
//		right = (num[numLen - 1] - '0');
//		for (int j = i; j < numLen - 1; j++)
//		{
//			right *= (num[j] - '0');
//		}
//
//		if (left == right)
//		{
//			isYes = true;
//			break;
//		}
//	}
//	if (isYes) cout << "YES";
//	else cout << "NO";
//
//}