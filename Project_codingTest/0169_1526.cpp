//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//	int k = 0;
//	bool flag = true;
//
//	while (1)
//	{
//		for (int i = n; i > 3; i--)
//		{
//			flag = true;
//			int checkNum = i;
//			while (checkNum)
//			{
//				k = checkNum % 10;
//				if (k != 7 && k != 4)
//				{
//					flag = false;
//					break;
//				}
//				else
//				{
//					checkNum -= k;
//					checkNum /= 10;
//				}
//			}
//			if (flag == true)
//			{
//				cout << i;
//				return 0;
//			}
//		}
//	}
//}