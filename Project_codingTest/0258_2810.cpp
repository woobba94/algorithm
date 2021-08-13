//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//
//	char* arr = new char[n];
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//
//	int count = n + 1;
//
//	for (int i = 0; i < n; i++)
//	{
//		if (arr[i] == 'L')
//		{
//			count--;
//			i++;
//		}
//	}
//
//	if (count > n)
//		cout << n;
//	else
//		cout << count;
//
//}