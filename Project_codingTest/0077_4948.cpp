//#include <iostream>
//using namespace std;
//
//bool arr[300000] = { false, };
//int n = 0;
//void setArr();
//int getCount();
//
//int main()
//{
//	while (1)
//	{
//		cin >> n;
//		if (n == 0) break;
//
//		setArr();
//		cout << getCount() << endl;
//	}
//}
//
//int getCount()
//{
//	int count = 0;
//
//	for (int i = n + 1; i <= 2 * n; i++)
//	{
//		if (arr[i] == false) count++;
//	}
//
//	return count;
//}
//
//void setArr()
//{
//	for (int i = 2; i <= 2 * n; i++)
//	{
//		if (arr[i] == false)
//		{
//			for (int j = i * 2; j <= 2 * n; j += i)
//			{
//				// true ¸é ¼Ò¼ö¾Æ´Ô.
//				arr[j] = true;
//			}
//		}
//	}
//}