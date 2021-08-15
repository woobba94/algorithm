//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//
//	int* arr = new int[n];
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//
//	int count = 1;
//	int nowVolume = 0;
//	for (int i = 0; i < n; i++)
//	{
//		nowVolume += arr[i];
//		if (nowVolume > m)
//		{
//			nowVolume = arr[i];
//			count++;
//		}
//	}
//	if (n == 0)
//		cout << 0;
//	else
//		cout << count;
//	
//}