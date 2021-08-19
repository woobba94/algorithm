//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int dataA[7] = { 0, 500, 300, 200, 50, 30, 10 };
//	int k = 1;
//	int A[101] = {}, B[65] = {};
//	int temp;
//	int val = dataA[k];
//	
//	for (int i = 1; i < 22; i++)
//	{
//		temp = k;
//		for (int j = 0; j < temp; j++)
//		{
//			A[i + j] = val;
//		}
//		i += temp - 1;
//		k++;
//		val = dataA[k];
//	}
//	B[1] = 512;
//	temp = 1;
//	val = 256;
//	for (int i = 2; i < 32; i++)
//	{
//		temp *= 2;
//		for (int j = 0; j < temp; j++)
//		{
//			B[i + j] = val;
//		}
//		i += temp - 1;
//		val /= 2;
//	}
//
//	int t;
//	cin >> t;
//	int a, b;
//	while (t--)
//	{
//		cin >> a >> b;
//		if (A[a] + B[b] == 0)
//			cout << 0 << endl;
//		else
//			cout << A[a] + B[b] << "0000" << endl;
//	}
//}