//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//
//	int* files = new int[n];
//
//	for(int i = 0; i < n; i++)
//	{
//		cin >> files[i];
//	}
//
//	long long size;
//	cin >> size;
//
//	long long count = 0;
//
//	for (int i = 0; i < n; i++)
//	{
//		if (files[i] % size == 0 && files[i] != 0)
//		{
//			count += files[i] / size;
//		}
//		else if(files[i] != 0)
//		{
//			count += files[i] / size;
//			count++;
//		}
//	}
//	long long result = count * size;
//	cout << result;
//}