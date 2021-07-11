//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//
//	int* arr = new int[n]();
//
//	// 입력
//	for (int i = 0; i < n; i++)
//	{
//		int input = 0;
//		cin >> input;
//		arr[i] = input;
//	}
//
//	int count = 1;
//	int max = arr[n - 1];
//
//	// count 세기
//	for (int i = n - 2; i >= 0; i--)
//	{
//		if (arr[i] > max)
//		{
//			count++;
//			// max 갱신
//			max = arr[i];
//		}
//	}
//	cout << count;
//}
//
