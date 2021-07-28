//#include <iostream>
//using namespace std;
//
//int main()
//{
//	bool arr[50][50] = {};
//
//	int n, m;
//	cin >> n >> m;
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			char input;
//			cin >> input;
//			if (input == 'X')
//				arr[i][j] = true;
//		}
//	}
//	bool flag = false;
//	int lowFalse = 0;
//	int colFalse = 0;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			if (arr[i][j] == true)
//				flag = true;
//		}
//		if (flag == true)
//			flag = false;
//		else
//			lowFalse++;
//	}
//
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (arr[j][i] == true)
//				flag = true;
//		}
//		if (flag == true)
//			flag = false;
//		else
//			colFalse++;
//	}
//
//	if (colFalse > lowFalse)
//		cout << colFalse;
//	else cout << lowFalse;
//
//}