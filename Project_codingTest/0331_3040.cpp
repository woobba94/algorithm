//#include <iostream>
//using namespace std;
//int arr[9] = {};
//int getSum(int index, int index2);
//int main()
//{
//	for (int i = 0; i < 9; i++)
//	{
//		cin >> arr[i];
//	}
//
//	int target1, target2;
//	for (int i = 0; i < 9; i++)
//	{
//		for (int j = i + 1; j < 9; j++)
//		{
//			if (getSum(i, j) == 100)
//			{
//				target1 = i;
//				target2 = j;
//			}
//		}
//	}
//
//	for (int i = 0; i < 9; i++)
//	{
//		if (i != target1 && i != target2)
//			cout << arr[i] << endl;
//	}
//	
//}
//
//// index와 index2 제외 sum 구하기
//int getSum(int index, int index2)
//{
//	int sum = 0;
//
//	for (int i = 0; i < 9; i++)
//	{
//		if (i != index && i != index2)
//			sum += arr[i];
//	}
//	return sum;
//}