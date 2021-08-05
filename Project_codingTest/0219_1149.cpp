//#include <iostream>
//using namespace std;
//int getMin(int a, int b);
//class Cost
//{
//public:
//	int red = 0;
//	int green = 0;
//	int blue = 0;
//};
//int main()
//{
//	int n;
//	cin >> n;
//	int cost[3];
//	Cost* arr = new Cost[n + 1];
//
//	for (int i = 1; i < n + 1; i++)
//	{
//		cin >> cost[0] >> cost[1] >> cost[2];
//
//		arr[i].red = getMin(arr[i - 1].green, arr[i - 1].blue) + cost[0];
//		arr[i].green = getMin(arr[i - 1].red, arr[i - 1].blue) + cost[1];
//		arr[i].blue = getMin(arr[i - 1].green, arr[i - 1].red) + cost[2];
//	}
//
//	cout << getMin(getMin(arr[n].red, arr[n].green), arr[n].blue);
//	delete[] arr;
//}
//
//int getMin(int a, int b)
//{
//	if (a < b)
//		return a;
//	return b;
//}