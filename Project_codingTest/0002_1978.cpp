//#include <iostream>
//
//using namespace std;
//
//int getPrimeCount(int*, int);
//int main()
//{
//	int n = 0;
//	
//	cin >> n;
//
//	int* num = new int[n];
//
//	for(int i = 0; i < n; i++)
//	{
//		cin >> num[i];
//	}
//
//	cout << getPrimeCount(num, n);
//
//}
//
//int getPrimeCount(int* num, int size)
//{
//	int count = 0;
//	bool flag = true;
//
//	for (int i = 0; i < size; i++)
//	{
//		if (1 < num[i])
//		{
//			for (int j = 2; j < num[i]; j++)
//			{
//				if (num[i] % j == 0)
//				{
//					flag = false;
//				}
//			}
//			if (flag == true)
//			{
//				count++;
//			}
//			else flag = true;
//		}
//	}
//
//	return count;
//}