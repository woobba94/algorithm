//#include <iostream>
//using namespace std;
//
//int main()
//{
//	long long n, w;
//	cin >> n >> w;
//
//	long long* arr = new long long[n];
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//
//	long long coin = 0;
//	bool isUp = true;
//	long long result = w;
//	for (int i = 0; i < n - 1; i++)
//	{
//		if (i == 0)
//		{
//			if (arr[i] < arr[i + 1])
//			{
//				coin = result / arr[i];
//				result = result % arr[i];
//			}
//			else
//				isUp = false;
//		}
//		else
//		{
//			// 상향
//			if (arr[i] < arr[i + 1])
//			{
//				// 하향 -> 상향
//				if (isUp == false)
//				{
//					coin = result / arr[i];
//					result = result % arr[i];
//					isUp = true;
//				}
//			}
//			// 하향
//			else
//			{
//				// 상향 -> 하향
//				if (isUp == true)
//				{
//					result += coin * arr[i];
//					coin = 0;
//					isUp = false;
//				}
//			}
//		}
//	}
//	if (coin != 0)
//		result += coin * arr[n - 1];
//
//	cout << result;
//}
