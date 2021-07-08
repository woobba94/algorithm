//#include <iostream>
//
//using namespace std;
//
//int getGCD(int a, int b);
//int main()
//{
//	int caseCount = 0;
//	int* numArr;
//	cin >> caseCount;
//	
//	for (int i = 0; i < caseCount; i++)
//	{
//		int n = 0;
//		long long sum = 0;
//		cin >> n;
//		numArr = new int[n];
//
//		for (int j = 0; j < n; j++)
//		{
//			cin >> numArr[j];
//		}
//
//		// 각 숫자 쌍들의 최대공약수 합산 (마지막 인덱스 검사 제외)
//		for (int k = 0; k < n - 1; k++)
//		{
//			// 선택한 것 다음 숫자 부터 공약수 계산 (중복 방지) l = k + 1
//			for (int l = k + 1; l < n; l++)
//			{
//				sum += getGCD(numArr[k], numArr[l]);
//			}
//		}
//		cout << sum << endl;
//	}
//}
//
//
//int getGCD(int a, int b)
//{
//	if (b == 0) return a;
//
//	return getGCD(b, a % b);
//}