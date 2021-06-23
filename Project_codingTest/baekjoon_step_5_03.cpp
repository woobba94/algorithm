//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int count[10000] = {0,};
//	int n;
//	cin >> n;
//	int *arr = new int[n];
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		count[arr[i] - 1]++;
//	}
//
//	for (int i = 0; i < n; i++) // 기존 배열의 원소들
//	{
//		for (int j = 0; j < count[i]; j++) // 각 숫자를 개수만큼 출력
//		{
//			cout << i + 1 << endl;
//		}
//	}
//}
