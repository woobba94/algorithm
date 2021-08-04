//#include <iostream>
//using namespace std;
//
//int getZeroDigit(int num);
//int main()
//{
//	int t;
//	cin >> t;
//	int n, m;
//	while(t--)
//	{
//		cin >> n >> m;
//
//		int* arr = new int[m - n + 1];
//
//		int result = 0;
//		for (int i = 0; i < m - n + 1; i++)
//		{
//			arr[i] = i + n;
//			result += getZeroDigit(arr[i]);
//		}
//		delete[] arr;
//		cout << result << endl;
//	}
//}
//
//int getZeroDigit(int num)
//{
//	int count = 0;
//	if (num == 0) return 1;
//
//	while (num)
//	{
//		if (num % 10 == 0)
//			count++;
//
//		num /= 10;
//	}
//
//	return count;
//}