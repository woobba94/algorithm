//#include <iostream>
//using namespace std;
//void calc(int n);
//
//int main()
//{
//	int n;
//	while (1)
//	{
//		cin >> n;
//		if (n == -1) break;
//		calc(n);
//	}
//}
//
//void calc(int n)
//{
//	int index = 0;
//	int sum = 0;
//	int* arr = new int[n];
//	for (int i = 1; i < n; i++)
//	{
//		// 약수이면
//		if (n % i == 0)
//		{
//			sum += i;
//			arr[index] = i;
//			index++;
//		}
//	}
//	index--;
//
//	if (sum == n)
//	{
//		cout << n << " = ";
//		for (int i = 0; i < index + 1; i++)
//		{
//			if (i == index)
//				cout << arr[i] << endl;
//			else
//				cout << arr[i] << " + ";
//		}
//	}
//	else
//		cout << n << " is NOT perfect." << endl;
//
//}