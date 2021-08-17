//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int red, brown;
//	cin >> red >> brown;
//
//	int result = 0;
//
//	//≥–¿Ã
//	int area = red + brown;
//	int x = 0, y = 0;
//
//	for (int i = 3; i < (red / 2); i++)
//	{
//		for (int j = 3; j < (red / 2); j++)
//		{
//			if (i * j == area)
//			{
//				if ((i - 2) * (j - 2) == brown)
//				{
//					x = i;
//					y = j;
//					break;
//				}
//			}
//		}
//	}
//	if (x < y)
//		cout << y << " " << x;
//	else
//		cout << x << " " << y;
//}