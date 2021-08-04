//#include <iostream>
//using namespace std;
//
//class PairData
//{
//public:
//	int len = 0;
//	int v = 0;
//};
//
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//
//	int way[101] = {};
//
//	PairData* arr = new PairData[n];
//	PairData* inputArr = new PairData[m];
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i].len >> arr[i].v;
//	}
//
//	for (int i = 0; i < m; i++)
//	{
//		cin >> inputArr[i].len >> inputArr[i].v;
//	}
//
//	int start = 0;
//	int end = arr[0].len;
//	for (int j = 0; j < n; j++)
//	{
//		if (0 < j)
//		{
//			start += arr[j - 1].len;
//			end += arr[j].len;
//		}
//
//		for (int k = start + 1; k <= end; k++)
//		{
//			way[k] = arr[j].v;
//		}
//	}
//
//	start = 0;
//	end = inputArr[0].len;
//	bool flag = false;
//	int maxOver = 0;
//	for (int j = 0; j < m; j++)
//	{
//		if (0 < j)
//		{
//			start += inputArr[j - 1].len;
//			end += inputArr[j].len;
//		}
//		for (int k = start + 1; k <= end; k++)
//		{
//			if (way[k] < inputArr[j].v)
//			{
//				int over = inputArr[j].v - way[k];
//				if (maxOver < over)
//					maxOver = over;
//				flag = true;
//			}
//		}
//	}
//
//	if (flag == false)
//		cout << 0;
//	else
//		cout << maxOver;
//
//	delete[] arr;
//	delete[] inputArr;
//}