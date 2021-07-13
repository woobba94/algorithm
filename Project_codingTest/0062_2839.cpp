//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int n, count = 0;
//	cin >> n;
//	while (n != 0)
//	{
//		if (n < 0)
//		{
//			count = -1;
//			break;
//		}
//		if (n % 5 == 0)
//		{
//			count += n / 5;
//			break;
//		}
//		else
//		{
//			if ((n - 5) % 3 == 0) n -= 5;
//			else n -= 3;
//			count++;
//		}
//	}
//	cout << count;
//}