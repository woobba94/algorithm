//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int arr[5] = {};
//	for (int i = 0; i < 5; i++)
//	{
//		cin >> arr[i];
//	}
//
//	// 약수가 3개인 최소의 자연수
//	int result = 4;
//
//	int count = 0;
//
//	while (1)
//	{
//		count = 0;
//
//		for (int i = 0; i < 5; i++)
//		{
//			if (result % arr[i] == 0)
//			{
//				count++;
//			}
//		}
//
//		if (2 < count)
//		{
//			cout << result;
//			break;
//		}
//		else
//			result++;
//	}
//}