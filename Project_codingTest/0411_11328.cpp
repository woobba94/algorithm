//#include <bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//
//	while (n--)
//	{
//		string a, b;
//		cin >> a >> b;
//		int aLen = a.length();
//		int bLen = b.length();
//		if (aLen != bLen)
//		{
//			cout << "Impossible" << endl;
//			continue;
//		}
//
//		int count = 0;
//		for (int i = 0; i < aLen; i++)
//		{
//			for (int j = 0; j < aLen; j++)
//			{
//				if (a[i] == b[j])
//				{
//					count++;
//					b[j] = ' ';
//					break;
//				}
//			}
//		}
//		if (count == aLen) cout << "Possible";
//		else cout << "Impossible";
//		cout << endl;
//	}
//}