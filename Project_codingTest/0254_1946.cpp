//#include <iostream>
//using namespace std;
//
//
//int getCount(int* arr, int n);
//int main()
//{	
//	int t;
//	cin >> t;
//	int n;
//	
//	while (t--)
//	{
//		cin >> n;
//		int* arr = new int[n];
//		int rank1, rank2;
//		for (int i = 0; i < n; i++)
//		{
//			cin >> rank1 >> rank2;
//			arr[rank1 - 1] = rank2; // 인덱스가 서류 등수, 요소가 면접등수
//		}
//		cout << getCount(arr, n) << endl;
//
//	}
//}
//
//int getCount(int* arr, int n)
//{
//	int count = 1;
//	int tempRank = arr[0]; // 서류 1등의 면접등수
//	for (int i = 1; i < n; i++)
//	{
//		// 면접 등수가 더 높음 -> 채용
//		if (arr[i] < tempRank)
//		{
//			count++;
//			tempRank = arr[i]; // 면접 등수 갱신
//		}
//	}
//	return count;
//}