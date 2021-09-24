//#include <bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	char arr[101][101] = {};
//	int n;
//	cin >> n;
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cin >> arr[i][j];
//		}
//	}
//
//	int rowCount = 0, colCount = 0;
//
//	int count = 0;
//
//	for (int i = 0; i < n; i++)
//	{
//		count = 0;
//		for (int j = 0; j < n; j++)
//		{
//			if (arr[i][j] == '.') count++;
//
//			if ((arr[i][j] == 'X' || j == n - 1))
//			{
//				if (count >= 2)
//					rowCount++;
//				count = 0;
//			}
//		}
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		count = 0;
//		for (int j = 0; j < n; j++)
//		{
//			if (arr[j][i] == '.') count++;
//
//			if ((arr[j][i] == 'X' || j == n - 1))
//			{
//				if(count >= 2)
//					colCount++;
//				count = 0;
//			}
//		}
//	}
//
//	cout << rowCount << ' ' << colCount;
//}