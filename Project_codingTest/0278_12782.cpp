//#include <iostream>
//using namespace std;
//
//void calc(string a, string b);
//int getMax(int a, int b);
//int main()
//{
//	int t;
//	cin >> t;
//	string a, b;
//	while (t--)
//	{
//		cin >> a >> b;
//
//		calc(a, b);
//	}
//}
//
//void calc(string a, string b)
//{
//	int zeroCount = 0;
//	int oneCount = 0;
//	for (int i = 0; i < a.length(); i++)
//	{
//		if (a[i] != b[i])
//		{
//			if (a[i] == '0')
//			{
//				zeroCount++;
//			}
//			else
//			{
//				oneCount++;
//			}
//		}
//	}
//	cout << getMax(zeroCount, oneCount) << endl;
//	
//}
//
//int getMax(int a, int b)
//{
//	if (a > b)
//		return a;
//	return b;
//}
