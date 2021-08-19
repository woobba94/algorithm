//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int girl, boy, k;
//	cin >> girl >> boy >> k;
//
//	int team = 0;
//
//	while (1)
//	{
//		team++;
//		boy--;
//		girl -= 2;
//		if (girl < 0 || boy < 0)
//		{
//			team--;
//			boy++;
//			girl += 2;
//			break;
//		}
//	}
//
//	while (1)
//	{
//		if (boy + girl >= k)
//			break;
//		team--;
//		boy++;
//		girl += 2;
//	}
//
//	cout << team;
//}