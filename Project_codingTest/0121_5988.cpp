//#include <iostream>
//using namespace std;
//
//int getLastIndex(char num[]);
//int main()
//{
//	
//	int n;
//	cin >> n;
//	// 최대 61자리 수 K (1 <= K <= 10^60)
//	char num[62] = {};
//	while (n--)
//	{
//		cin >> num;
//
//		if ((num[getLastIndex(num)] - '0') % 2 == 0)
//		{
//			cout << "even" << endl;
//		}
//		else cout << "odd" << endl;
//	}
//
//
//}
//
//int getLastIndex(char num[])
//{
//	for (int i = 0; i < 61; i++)
//	{
//		if (num[i] == '\0') return (i - 1);
//	}
//
//	return -1;
//}