//#include <iostream>
//using namespace std;
//
//class Pair
//{
//public:
//	int first = 0;
//	int second = 0;
//	int sum = 0;
//	int count = 0;
//
//	void getSum()
//	{
//		sum = second - first + 1;
//	}
//};
//int main()
//{
//	int len;
//	cin >> len;
//
//	int n;
//	cin >> n;
//	bool* cake = new bool[len]();
//	Pair* arr = new Pair[n]();
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i].first >> arr[i].second;
//		arr[i].getSum();
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = arr[i].first; j < arr[i].second + 1; j++)
//		{
//			if (cake[j] == false)
//			{
//				cake[j] = true;
//				arr[i].count++;
//			}
//		}
//	}
//
//	int maxSum = 0;
//	int maxSumNum = 0;
//	int maxCount = 0;
//	int maxCountNum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (maxSum < arr[i].sum)
//		{
//			maxSum = arr[i].sum;
//
//			maxSumNum = i + 1;
//		}
//
//		if (maxCount < arr[i].count)
//		{
//			maxCount = arr[i].count;
//			maxCountNum = i + 1;
//		}
//	}
//
//	cout << maxSumNum << endl;
//	cout << maxCountNum;
//}