//#include <iostream>
//using namespace std;
//
//bool dataArr[1001] = {};
//int getResult(int n, int k);
//void setData();
//int main()
//{
//	int n, k;
//	cin >> n >> k;
//
//	setData();
//	cout << getResult(n, k);
//
//}
//
//int getResult(int n, int k)
//{
//	int count = 0;
//	for (int i = 2; i <= n; i++) 
//	{
//		// i 의 배수 체크
//		for (int j = 1; i * j <= n; j++) 
//		{
//			// 들리지 않았다면
//			if (dataArr[i * j] == true)
//			{
//				dataArr[i * j] = false;
//				count++;
//
//				if (count == k) 
//				{
//					return i * j;
//				}
//			}
//		}
//	}
//}
//
//void setData()
//{
//	for (int i = 1; i <= 1000; i++)
//	{
//		dataArr[i] = true;
//	}
//}