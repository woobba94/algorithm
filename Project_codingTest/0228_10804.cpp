//#include <iostream>
//using namespace std;
//int arr[21] = {};
//void setArr();
//void calc(int a, int b);
//int main()
//{
//	setArr();
//
//	int a, b;
//	for (int i = 0; i < 10; i++)
//	{
//		cin >> a >> b;
//		calc(a, b);
//	}
//
//	for (int i = 1; i < 21; i++)
//	{
//		cout << arr[i] << " ";
//	}
//}
//void calc(int a, int b)
//{
//	int j = b;
//	for (int i = a; i < 21; i++)
//	{
//		if (i >= j)
//			break;
//		int temp = arr[i];
//		arr[i] = arr[j];
//		arr[j] = temp;
//		j--;
//	}
//}
//
//void setArr()
//{
//	for (int i = 1; i < 21; i++)
//	{
//		arr[i] = i;
//	}
//}