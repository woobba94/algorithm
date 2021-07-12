//#include <iostream>
//
//using namespace std;
//
//void sort(int* (&arr), int size);
//int main() 
//{
//	// 집합크기
//	int L; 
//	cin >> L;
//
//	int* arr = new int[L];
//
//	bool isInclude = false;
//
//	for (int i = 0; i < L; i++) 
//	{
//		cin >> arr[i];
//	}
//
//	// 정렬
//	sort(arr, L);
//
//	int n; 
//	cin >> n;
//
//	// 원소에 n이 있는지 검사
//	for (int i = 0; i < L; i++) 
//	{
//		if (arr[i] == n) 
//		{
//			isInclude = true;
//			break;
//		}
//	}
//
//	if (isInclude == true) 
//	{
//		cout << 0 << endl;
//	}
//	else 
//	{
//		int start = 0;
//		int end = 0;
//
//		for (int i = 0; i < L; i++) 
//		{
//			// n이 포함되는 구간 찾기
//			if (n < arr[i]) 
//			{
//				start = arr[i - 1];
//				end = arr[i];
//				break;
//			}
//		}
//
//		int goodCount = 0;
//
//		// 좋은 구간 세기
//		for (int i = start + 1; i < end; i++) 
//		{
//			for (int j = i + 1; j < end; j++) 
//			{
//				if (i <= n && n <= j) 
//				{
//					goodCount++;
//				}
//			}
//		}
//		cout << goodCount << endl;
//	}
//}
//
//void sort(int* (&arr), int size)
//{
//	if (size == 1) return;
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < size; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}