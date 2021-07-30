//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//
//	int* arr = new int[n + 1];
//	for (int i = 1; i <= n; i++)
//	{
//		arr[i] = i;
//	}
//
//	while (m--)
//	{
//		int start, end;
//		cin >> start >> end;
//		while (1)
//		{
//			if (start >= end) break;
//			int temp = arr[start];
//			arr[start] = arr[end];
//			arr[end] = temp;
//			start++;
//			end--;
//		}
//	}
//
//	for (int i = 1; i <= n; i++)
//	{
//		cout << arr[i] << " ";
//	}
//}
