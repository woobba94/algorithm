//#include <iostream>
//
//using namespace std;
//
//const int MAX_SIZE = 1000;
//
//int calc(int n, int k);
//int main(void) 
//{
//	int n, k;
//	cin >> n >> k;
//
//	cout << calc(n, k);
//}
//
//int calc(int n, int k)
//{
//	// 몇번 지우는지 체크
//	int count = 0;
//
//	int arr[MAX_SIZE];
//	for (int i = 2; i <= n; i++)
//	{
//		arr[i] = i;
//	}
//
//	// 2부터 n까지 배수 체크
//	for (int i = 2; i <= n; i++)
//	{
//		// 1배부터 배수 < n 까지
//		for (int j = 1; i * j <= n; j++)
//		{
//			// 이미 지워진 수
//			if (arr[i * j] == -1)
//			{
//				continue;
//			}
//
//			// 배수인 숫자 지워줌
//			arr[i * j] = -1;
//
//			// 지운 횟수++
//			count++;
//
//			// k 번째 지웠으면
//			if (count == k)
//			{
//				// 해당 배수 반환
//				return i * j;
//			}
//		}
//	}
//}