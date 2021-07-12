//#include <iostream>
//
//using namespace std;
//
//int getGCD(int a, int b);
//
//int main() {
//
//	int gcd = 0;
//	int n; // 심어진 가로수의 수 (3 ≤ N ≤ 100,000)
//	cin >> n;
//
//	int* tree = new int[n];
//
//	// 기존 가로수 위치 입력
//	for (int i = 0; i < n; i++)
//	{
//		cin >> tree[i];
//	}
//
//	//// 가로수가 3개라면
//	//if (n == 3) 
//	//{
//	//	gcd = getGCD(arr[1] - arr[0], arr[2] - arr[1]);
//	//}
//	//else
//	//{
//	//	for (int i = 2; i < n - 1; i++)
//	//	{
//	//		gcd = getGCD(gcd, arr[i + 1] - arr[i]);
//	//	}
//	//}
//
//	// 거리 차의 최대공약수
//	gcd = getGCD(tree[1] - tree[0], tree[2] - tree[1]);
//
//	for (int i = 2; i < n - 1; i++) 
//	{
//		// 거리차의 최대공약수와 
//		// 다음 거리차의 최대공약수의 최대공약수
//		// getGDC(거리차 최대공약수)
//		gcd = getGCD(gcd, tree[i + 1] - tree[i]);
//	}
//
//	// 처음과 마지막가로수 거리 / 각 거리 들의 최대공약수
//	int result = ((tree[n - 1] - tree[0]) / gcd) + 1;
//
//	// 마지막으로 이미 심은 가로수 수 빼기
//	result -= n;
//
//	cout << result;
//}
//
//int getGCD(int a, int b) 
//{
//	// 큰 수 앞으로
//	if (a < b)
//	{
//		int temp = a;
//		a = b;
//		b = temp;
//	}
//
//	if (b == 0) return a;
//
//	return getGCD(b, a % b);
//}