//#include<iostream>
//using namespace std;
//
//const int MAX_SIZE = 10001;
//int arr[MAX_SIZE] = {};
//void calc(int arr[], int, int);
//
//int main() 
//{
//	int m, n;
//	cin >> m >> n;
//	
//	calc(arr, m, n);
//
//}
//
//void calc(int arr[], int min, int max)
//{
//	// 초기화
//	for (int i = 1; i < MAX_SIZE; i++)
//	{
//		arr[i] = i;
//	}
//
//	// 2부터 검사
//	for (int i = 2; i < MAX_SIZE; i++)
//	{
//		// 이미 지워진 경우  
//		if (arr[i] == -1) continue;
//
//		// 지워지지 않은 경우 자기자신을 제외한 배수 지우기  
//		for (int j = 2 * i; j < MAX_SIZE; j += i)
//		{
//			if (arr[i] == -1) continue;
//			else arr[j] = -1;
//		}
//	}
//
//	for (int i = min; i < max + 1; i++)
//	{
//		if (min != 0 && min != 1)
//		{
//			if (arr[i] != -1)
//			{
//				cout << i << endl;
//			}
//		}
//	}
//}