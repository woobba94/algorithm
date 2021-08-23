//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int y, x;
//	cin >> y >> x;
//
//	int* arr = new int[x];
//	for (int i = 0; i < x; i++)
//	{
//		cin >> arr[i];
//	}
//
//	bool isUp;
//
//	int max = arr[0];
//		
//	int count = 0;
//	for (int i = 1; i < x - 1; i++)
//	{
//		if (i == 1)
//		{
//			if (arr[0] <= arr[1])
//				isUp = true;
//			else
//				isUp = false;
//		}
//
//		if (arr[i] < arr[i + 1])
//		{
//			// 아래 꼭지점
//			if (isUp == false && arr[i] < max)
//			{
//				isUp = true;
//				count++;
//				arr[i]++;
//				i = 0;
//			}
//		}
//		else
//		{
//			// 위 꼭지점 -> max 갱신
//			if (isUp == true && arr[i] > max)
//			{
//				max = arr[i];
//			}
//			isUp = false;
//		}
//	}
//
//	cout << count;
//
//}