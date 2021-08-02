//#include <iostream>
//using namespace std;
//
//class Painting
//{
//public:
//	int id = 0;
//	char arr[6][8] = {}; // 5x7
//};
//
//int getDiffCount(Painting p1, Painting p2);
//
//int main()
//{
//	int n;
//	cin >> n;
//	Painting* p = new Painting[n];
//
//	for (int i = 0; i < n; i++)
//	{
//		p[i].id = i + 1;
//		for (int j = 0; j < 5; j++)
//		{
//			cin >> p[i].arr[j];
//		}
//	}
//	
//	int minCount = 5 * 7;
//	int p1, p2;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (i != j && i < j)
//			{
//				if (getDiffCount(p[i], p[j]) < minCount)
//				{
//					minCount = getDiffCount(p[i], p[j]);
//					p1 = i;
//					p2 = j;
//				}
//			}
//		}
//	}
//
//	cout << p[p1].id << " " << p[p2].id;
//
//}
//
//int getDiffCount(Painting p1, Painting p2)
//{
//	int count = 0;
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 7; j++)
//		{
//			if (p1.arr[i][j] != p2.arr[i][j])
//			{
//				count++;
//			}
//		}
//	}
//	return count;
//}