//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		int count = 0;
//		int n, m;
//		cin >> n >> m; // 0 < n,m <= 100
//
//		for (int i = 1; i < n; i++)
//		{
//			for (int j = i + 1; j < n; j++)
//			{
//				if ((i * i + j * j + m) % (i * j) == 0)
//					count++;
//			}
//		}
//
//		cout << count << endl;
//	}
//}