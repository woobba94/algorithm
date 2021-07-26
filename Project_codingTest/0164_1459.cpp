//#include <iostream>
//using namespace std;
//
//long long getMin(long long num1, long long num2);
//int main()
//{
//	long long x, y;
//	cin >> x >> y;
//	long long w, s;
//	cin >> w >> s;
//	long long case1, case2, case3;
//	long long mod = (x + y) % 2;
//	// x 를 큰 수로
//	if (x < y)
//	{
//		long long temp = x;
//		x = y;
//		y = temp;
//	}
//
//	// 직선으로만 이동할 때
//	case1 = (x + y) * w;
//
//	// 대각선만 남을때까지 이동 후 나머지 대각선이동 
//	case2 = (x - y) * w + y * s;
//
//	// 대각선 만으로 이동 가능
//	if ((x + y) % 2 == 0)
//	{
//		case3 = x * s;
//	}
//	// 대각선과 직선의 조합으로 이동가능
//	else
//	{
//		// 1칸 이동
//		x -= 1;
//		case3 = x * s + w;
//	}
//
//	
//	
//	long long result = getMin(case1, getMin(case2, case3));
//
//	cout << result;
//
//}
//
//long long getMin(long long num1, long long num2)
//{
//	if (num1 > num2) return num2;
//	return num1;
//}