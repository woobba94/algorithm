//#include<iostream>
//using namespace std;
//
//int dataArr[31][31];
//void setData();
//int main()
//{
//	int testCase = 0;
//	cin >> testCase;
//	setData();
//	while (testCase--)
//	{
//		int n, m; //  (0 < N ≤ M < 30)
//
//		cin >> n >> m;
//
//		cout << dataArr[n][m] << endl;
//	}
//}
//
//void setData()
//{
//	// 초기값 설정 : 왼쪽 점 1개일때 의 경로 => 오른쪽 점 개수
//	for (int i = 1; i < 31; i++)
//	{
//		dataArr[1][i] = i;
//	}
//
//	// 왼쪽 점 2개 부터 
//	for (int i = 2; i < 31; i++)
//	{
//		for (int j = i; j < 31; j++)
//		{
//			for (int k = j - 1; 0 < k; k--)
//			{
//				// 도출한 점화식
//				dataArr[i][j] += dataArr[i - 1][k];
//			}
//		}
//	}
//}