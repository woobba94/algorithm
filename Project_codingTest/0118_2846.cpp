//#include <iostream>
//using namespace std;
//
//int getMaxheight(int* arr);
//int n = 0;
//int main()
//{
//	cin >> n; // N(1 ¡Â N ¡Â 1000)
//	int* arr = new int[n];
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//
//	cout << getMaxheight(arr);
//}
//
//int getMaxheight(int* arr)
//{
//	int maxheight = 0;
//	int sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (arr[i] < arr[i + 1])
//		{
//			sum += arr[i + 1] - arr[i];
//		}
//		else
//		{
//			if (maxheight < sum)
//			{
//				maxheight = sum;
//			}
//			sum = 0;
//		}
//	}
//	return maxheight;
//}