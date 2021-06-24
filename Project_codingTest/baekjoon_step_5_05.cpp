//#include <iostream>
//using namespace std;
//
//void sort(int* (&x), int* (&y), int size);
//
//int main()
//{
//	int n;
//	cin >> n;
//
//	int* x = new int[n];
//	int* y = new int[n];
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> x[i] >> y[i];
//	}
//	sort(x, y, n);
//
//	for (int i = 0; i < n; i++)
//	{
//		cout << x[i] << " " << y[i] << endl;
//	}
//}
//
//void sort(int* (&x), int* (&y), int size)
//{
//	int tempX = 0;
//	int tempY = 0;
//	
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < size - 1; j++) 
//		{
//			if (x[j] == x[j + 1])
//			{
//				if (y[j] > y[j + 1])
//				{
//					tempY = y[j];
//					y[j] = y[j + 1];
//					y[j + 1] = tempY;
//				}
//			}
//			else if (x[j] > x[j + 1])
//			{
//				tempX = x[j];
//				x[j] = x[j + 1];
//				x[j + 1] = tempX;
//
//				tempY = y[j];
//				y[j] = y[j + 1];
//				y[j + 1] = tempY;
//			}
//		}
//	}
//}