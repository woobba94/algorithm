//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//
//	int* card = new int[n];
//
//	for (int i = 0; i < n; i++)
//	{
//		card[i] = i + 1;
//	}
//
//	int index = 0;
//	int cycle = 2;
//	int dropCount = 0;
//
//	while (dropCount < n - 1)
//	{
//		if (card[index] != -1)
//		{
//			if (cycle == 2)
//			{
//				card[index] = -1;
//				dropCount++;
//				index++;
//				cycle = 1;
//			}
//			else
//			{
//				cycle++;
//				index++;
//			}
//		}
//		else
//		{
//			index++;
//		}
//			
//		if (index >= n)
//			index -= n;
//
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		if (card[i] != -1)
//			cout << card[i];
//	}
//}