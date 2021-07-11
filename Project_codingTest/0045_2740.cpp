//#include <iostream>
//
//using namespace std;
//
//void setArr(int** (&arr), int size, int innerSize);
//void inputArr(int** (&arr), int size, int innerSize);
//int main()
//{
//	int n, m, k;
//
//	// 행렬 A
//	cin >> n >> m;
//	int** matrixA = new int*[n];
//	setArr(matrixA, n, m);
//	inputArr(matrixA, n, m);
//
//	// 행렬 B
//	cin >> m >> k;
//	int** matrixB = new int* [m];
//	setArr(matrixB, m, k);
//	inputArr(matrixB, m, k);
//
//	
//	int** result = new int*[n];
//	setArr(result, n, k);
//
//	// 행렬 곱 계산
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < k; j++)
//		{
//			for (int k = 0; k < m; k++)
//			{
//				result[i][j] += matrixA[i][k] * matrixB[k][j];
//			}
//			cout << result[i][j] << " ";
//		}
//		cout << endl;
//	}
//}
//
//// 초기화함수 :  인덱스마다 innerSize 만큼 할당
//void setArr(int** (&arr), int size ,int innerSize)
//{
//	for (int i = 0; i < size; i++)
//	{
//		arr[i] = new int[innerSize]();
//	}
//}
//
//void inputArr(int** (&arr), int size, int innerSize)
//{
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < innerSize; j++)
//		{
//			cin >> arr[i][j];
//		}
//	}
//}