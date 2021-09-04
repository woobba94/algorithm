//#include <iostream>
//using namespace std;
//
//int getReverse(int a);
//int main()
//{
//	int n, k;
//	cin >> n >> k;
//	int max = 0;
//
//	for (int i = 1; i <= k; i++)
//	{
//		if (max < getReverse(n * i))
//		{
//			max = getReverse(n * i);
//		}
//	}
//
//	cout << max;
//}
//
//int getReverse(int a)
//{
//	int temp = a;
//	int size = 1000000;
//	while (temp)
//	{
//		if (temp / size == 0)
//			size /= 10;
//		else
//			break;
//	}
//
//
//	int result = 0;
//	while (a)
//	{
//		result += (a % 10) * size;
//		size /= 10;
//		a /= 10;
//	}
//
//	return result;
//}