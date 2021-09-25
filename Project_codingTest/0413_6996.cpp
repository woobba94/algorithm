//#include <bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//	while (n--)
//	{
//		string a, b;
//		cin >> a >> b;
//		int aLen = a.length(), bLen = b.length();
//
//		if (aLen != bLen)
//		{
//			cout << a << " & " << b << " are NOT anagrams." << endl;
//			continue;
//		}
//
//		int count = 0;
//		string tempB = b;
//		for (int i = 0; i < aLen; i++)
//		{
//			for (int j = 0; j < aLen; j++)
//			{
//				if (a[i] == tempB[j])
//				{
//					count++;
//					tempB[j] = ' ';
//					break;
//				}
//			}
//		}
//
//		if(count == aLen) 
//			cout << a << " & " << b << " are anagrams." << endl;
//		else 
//			cout << a << " & " << b << " are NOT anagrams." << endl;
//	}
//}