//#include <iostream>
//using namespace std;
//// ¾²·¹±â¹®Á¦
//int main()
//{
//	int n;
//	cin >> n;
//	
//	int* cost = new int[n];
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> cost[i];
//	}
//
//	// ÃÖ´ñ°ª »Ì¾Æ³¿
//	int max = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (max < cost[i])
//		{
//			max = cost[i];
//		}
//	}
//	
//
//	int sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		sum += cost[i];
//	}
//
//	// ÀüÃ¼ÇÕ¿¡¼­ ÃÖ´ñ°ª »­
//	sum -= max;
//	cout << sum;
//}