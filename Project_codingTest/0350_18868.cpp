//#include <iostream>
//using namespace std;
//
//class Space {
//
//public:
//	int arr[100] = {};
//};
//
//int main()
//{
//	int m, n;
//	cin >> m >> n;
//	Space* s = new Space[m];
//
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cin >> s[i].arr[j];
//		}
//	}
//
//	int result = 0;
//
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = i + 1; j < m; j++)
//		{
//			bool flag = true;
//			for (int k = 0; k < n; k++)
//			{
//				for (int l = 0; l < n; l++)
//				{
//					if (k == l) continue;
//					if ((s[i].arr[k] == s[i].arr[l]) &&
//						(s[j].arr[k] != s[j].arr[l]) ||
//						(s[i].arr[k] < s[i].arr[l]) &&
//						(s[j].arr[k] >= s[j].arr[l]) ||
//						(s[i].arr[k] > s[i].arr[l]) &&
//						(s[j].arr[k] <= s[j].arr[l]))
//					{
//						flag = false;
//						break;
//					}
//				}
//			}
//			if (flag) result++;
//		}
//	}
//
//	cout << result;
//
//}
//
