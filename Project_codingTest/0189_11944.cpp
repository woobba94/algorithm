//#include <iostream>
//using namespace std;
//
//char n[5];
//int m;
//int getCycle(char n[]);
//int getSize(char n[]);
//int main()
//{
//	
//	cin >> n >> m;
//	int size = getSize(n);
//	int cycle = getCycle(n);
//
//	if (size * cycle > m)
//	{
//		int count = 0;
//		while (1)
//		{
//			if (count == m) break;
//			for (int i = 0; i < size; i++)
//			{
//				if (count == m) break;
//				cout << n[i];
//				count++;
//			}
//		}
//	}
//	else
//	{
//		while(cycle--)
//		{
//			for (int i = 0; i < size; i++)
//			{
//				cout << n[i];
//			}
//		}
//	}
//	
//	
//}
//int getCycle(char n[])
//{
//	int result = 0;
//	int k = 1;
//	for (int i = getSize(n) - 1; i >= 0; i--)
//	{
//		result += (n[i] - '0') * k;
//		k *= 10;
//	}
//
//	return result;
//}
//
//int getSize(char n[])
//{
//	int size = 0;
//	for (int i = 0; i < 5; i++)
//	{
//		if (n[i] == '\0') break;
//		size++;
//	}
//	return size;
//}