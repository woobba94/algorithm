//#include <iostream>
//using namespace std;
//
//bool isPow(int num);
//int main()
//{
//	int m, n;
//	cin >> m >> n;
//	int sum = 0;
//
//	bool flag = true;
//	int min = n;
//
//	for (int i = m; i < n + 1; i++)
//	{
//		if (isPow(i) == true)
//		{
//			if (flag == true)
//			{
//				flag = false;
//				min = i;
//			}
//			sum += i;
//		}
//	}
//
//	if (sum == 0)
//	{
//		cout << -1 << endl;
//	}
//	else
//	{
//		cout << sum << endl;
//		cout << min << endl;
//	}
//}
//
//bool isPow(int num)
//{
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i * i == num) return true;
//	}
//	return false;
//}