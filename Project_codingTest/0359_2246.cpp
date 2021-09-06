//#include <iostream>
//using namespace std;
//
//class Condo
//{
//public:
//	int distance;
//	int cost;
//};
//
//int main()
//{
//	int n;
//	cin >> n;
//	
//	Condo* arr = new Condo[n];
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i].distance >> arr[i].cost;
//	}
//
//	int count = 0;
//
//	for (int i = 0; i < n; i++)
//	{
//		bool flag = true;
//		for (int j = 0; j < n; j++)
//		{
//			if (i == j)continue;
//
//			if (arr[i].distance > arr[j].distance)
//			{
//				if (arr[i].cost >= arr[j].cost)
//					flag = false;
//			}
//
//			if (arr[i].cost > arr[j].cost)
//			{
//				if (arr[i].distance >= arr[j].distance)
//					flag = false;
//			}
//		}
//		if (flag) count++;
//	}
//
//	cout << count;
//
//}