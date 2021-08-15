//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//	int* arr = new int[n];
//	int* comp = new int[n];
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> comp[i];
//	}
//	sort(arr, arr + n);
//	sort(comp, comp + n);
//	int index = 0;
//	int score = 0;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = index; j < n; j++)
//		{
//			if (arr[i] < comp[j])
//			{
//				score++;
//				index = j + 1;
//				break;
//			}
//		}
//	}
//
//	if (score >= (n + 1) / 2 + (n + 1) % 2)
//		cout << "YES";
//	else
//		cout << "NO";
//
//}