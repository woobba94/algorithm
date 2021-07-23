//#include <iostream>
//using namespace std;
//
//char a[10001], b[10001];
//
//int main()
//{
//	cin >> a >> b;
//	long long sum = 0;
//
//	for (int i = 0; i < 10000; i++)
//	{
//		if (a[i] == '\0') break;
//		for (int j = 0; j < 10000; j++)
//		{
//			if (b[j] == '\0') break;
//
//			sum += (a[i] - '0') * (b[j] - '0');
//		}
//	}
//
//	cout << sum;
//
//}