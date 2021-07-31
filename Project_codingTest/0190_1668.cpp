//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//
//	int* arr = new int[n];
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//
//	int maxHeight = arr[0];
//	int leftCount = 1, rightCount = 1;
//	// 왼쪽에서 봤을때 -> 두번째 것부터 검사
//	for (int i = 1; i < n; i++)
//	{
//		if (maxHeight < arr[i])
//		{
//			leftCount++;
//			maxHeight = arr[i];
//		}
//	}
//
//	// 최고높이 오른쪽 첫번째로 초기화
//	maxHeight = arr[n - 1];
//
//	// 두번째부터
//	for (int i = n - 2; i >= 0; i--)
//	{
//		if (maxHeight < arr[i])
//		{
//			rightCount++;
//			maxHeight = arr[i];
//		}
//	}
//
//	cout << leftCount << endl;
//	cout << rightCount;
//
//
//	
//}