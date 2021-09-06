//#include <iostream>
//using namespace std;
//int n, k;
//int result = 0;
//bool check(int num);
//int main()
//{
//	cin >> n >> k;
//
//	int* arr = new int[k];
//	for (int i = 0; i < k; i++)
//	{
//		cin >> arr[i];
//	}
//	for (int i = 0; i < k; i++)
//	{
//		for (int j = 0; j < k; j++)
//		{
//			for (int l = 0; l < k; l++)
//			{
//				int num = 0;
//				num = arr[i] * 100 + arr[j] * 10 + arr[l];
//				if (!check(num))
//				{
//					num = arr[i] * 10 + arr[j];
//					if (!check(num))
//						num = arr[i];
//				}
//				if (result < num)
//				{
//					result = num;
//				}
//					
//			}
//		}
//	}
//	cout << result;
//}
//
//bool check(int num)
//{
//	if (num <= n)
//			return true;
//	return false;
//}
//
