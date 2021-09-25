//#include <bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	while (1)
//	{
//		int n;
//		cin >> n;
//		if (!n) break;
//		cin.ignore();
//
//		string* arr = new string[n];
//
//		for (int i = 0; i < n; i++)
//		{
//			getline(cin, arr[i]);
//		}
//		int result = 0;
//		for (int i = 0; i < n; i++)
//		{
//			int len = arr[i].length();
//			for (int j = 0; j < len; j++)
//			{
//				if (arr[i][j] == ' ' && j >= result)
//				{
//					result = j;
//					break;
//				}
//
//				if (j == len - 1 && j >= result)
//					result = j + 1;
//			}
//		}
//		cout << result + 1 << endl;
//	}
//}