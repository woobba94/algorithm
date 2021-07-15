//#include <iostream>
//
//using namespace std;
//
//int getSum(int data[][15], int i, int j);
//void setData(int data[][15]);
//int main()
//{
//	int data[15][15] = { 0, };
//	int testCase = 0;
//	int k = 1; // Ãþ¼ö (1~)
//	int n = 1; // È£¼ö (1~)
//	cin >> testCase;
//
//
//	setData(data);
//	while (testCase--)
//	{
//		cin >> k >> n;
//		cout << data[k][n] << endl;
//	}
//}
//
//void setData(int data[][15])
//{
//	// 0Ãþ È£¼ö ¸ÕÀú ÃÊ±âÈ­
//	for (int i = 1; i < 15; i++)
//	{
//		data[0][i] = i;
//	}
//
//	// i = Ãþ¼ö, j = È£¼ö
//	for (int i = 1; i < 15; i++)
//	{
//		for (int j = 1; j < 15; j++)
//		{
//			data[i][j] = getSum(data, i, j);
//		}
//	}
//}
//
//int getSum(int data[][15], int i, int j)
//{
//	int result = 0;
//	for (int k = 1; k <= j; k++)
//	{
//		result += data[i - 1][k];
//	}
//
//	return result;
//}