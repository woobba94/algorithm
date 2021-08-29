//#include <iostream>
//using namespace std;
//
//bool isNotOk[201][201];
//int n, m;
//int main()
//{
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cin >> n >> m;
//
//	for (int i = 0; i < m; i++)
//	{
//		int temp1, temp2;
//		cin >> temp1 >> temp2;
//		isNotOk[temp1][temp2] = true;
//		isNotOk[temp2][temp1] = true;
//	}
//	int count = 0;
//	for (int i = 1; i < n - 1; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			if (!isNotOk[i][j])
//			{
//				for (int k = j + 1; k <= n; k++)
//				{
//					if (!isNotOk[i][k] && !isNotOk[j][k]) count++;
//				}
//			}
//		}
//	}
//	cout << count;
//
//}