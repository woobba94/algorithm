//#include <iostream>
//using namespace std;
//
////n이 10 이하일 때 사용가능한 이항계수 알고리즘
//int cal(int n, int k);
//int main()
//{
//	int n = 0, k = 0;
//
//	cin >> n >> k;
//
//	cout << cal(n, k);
//}
//
//int cal(int n, int k)
//{
//	// k가 0이거나 n과 같다면 무조건 1
//	if (k == 0 || k == n) return 1;
//	else
//	{
//		return cal(n - 1, k) + cal(n - 1, k - 1);
//	}
//}