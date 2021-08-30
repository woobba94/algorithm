//#include <iostream>
//using namespace std;
//int n;
//int arr[100];
//int maxSize = 1;
//void calc(int num);
//int main()
//{
//
//	cin >> n;
//	arr[0] = n;
//	for (int i = n / 2; i < n; i++)
//	{
//		if (i == 0) i = 1;
//		calc(i);
//	}
//
//	cout << maxSize << endl;
//
//	for (int i = 0; i < maxSize; i++)
//	{
//		cout << arr[i] << " ";
//	}
//}
//
//void calc(int num)
//{
//	int temp[100];
//	int tempSize = 2;
//	temp[0] = n;
//	temp[1] = num;
//	for (int i = 2; i < 100; i++)
//	{
//		if (temp[i - 2] - temp[i - 1] < 0) break;
//		temp[i] = temp[i - 2] - temp[i - 1];
//		tempSize++;
//	}
//	if (maxSize < tempSize)
//	{
//		maxSize = tempSize;
//		for (int i = 0; i < maxSize; i++)
//		{
//			arr[i] = temp[i];
//		}
//	}
//}