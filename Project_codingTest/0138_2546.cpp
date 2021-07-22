//#include <iostream>
//using namespace std;
//
//double getAvr(int* arr, int size);
//int main()
//{
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//	int testCase = 0;
//	cin >> testCase;
//	int n, m;
//	int* arrN;
//	int* arrM;
//
//	while (testCase--)
//	{
//		cout << '\n';
//		
//		cin >> n >> m;
//		arrN = new int[n];
//		arrM = new int[m];
//
//		for (int i = 0; i < n; i++)
//		{
//			cin >> arrN[i];
//		}
//
//		for (int i = 0; i < m; i++)
//		{
//			cin >> arrM[i];
//		}
//
//		int avrN = getAvr(arrN, n);
//		int avrM = getAvr(arrM, m);
//		
//		int count = 0;
//		for (int i = 0; i < n; i++)
//		{
//			if (arrN[i] >= avrM && arrN[i] < avrN)
//			{
//				count++;
//			}
//		}
//		cout << count;
//	}
//
//}
//double getAvr(int* arr, int size)
//{
//	int sum = 0;
//	for (int i = 0; i < size; i++)
//	{
//		sum += arr[i];
//	}
//
//	return sum / size;
//}