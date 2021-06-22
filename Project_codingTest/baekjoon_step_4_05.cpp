//#include <iostream>
//using namespace std;
//
//void cal(int n, int i, int j);
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cal(n/3, i, j);
//		}
//		cout << endl;
//	}
//	
//}
//
//void cal(int n, int i, int j)
//{
//	if (i / n % 3 == 1 && j / n % 3 == 1) cout << " ";
//	else
//	{
//		if (n == 1)cout << "*";
//		else cal(n / 3, i, j);
//	}
//}