//#include <iostream>
//using namespace std;
//const int SIZE = 10;
//int main()
//{
//	
//	int arr[SIZE] = {};
//	int sum = 0;
//
//	for(int i = 0; i < SIZE; i++)
//	{
//		cin >> arr[i];
//		sum += arr[i];
//	}
//
//	// 평균값 출력
//	cout << sum / SIZE << endl;
//
//	int count[SIZE] = {};
//
//	for (int i = 0; i < SIZE; i++)
//	{
//		for (int j = 0; j < SIZE; j++)
//		{
//			if (i != j && arr[i] == arr[j] && arr[j] != 0)
//			{
//				count[i]++;
//				arr[j] = 0;
//			}
//		}
//	}
//	int index = 0;
//	int temp = 0;
//	for (int i = 0; i < SIZE; i++)
//	{
//		if (temp < count[i])
//		{
//			temp = count[i];
//			index = i;
//		}
//	}
//
//	cout << arr[index];
//
//}