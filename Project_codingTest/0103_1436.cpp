//#include <iostream>
//using namespace std;
//
//int calc(int n);
//bool check(int target);
//
//int main()
//{
//	int n;
//	cin >> n;
//
//	cout << calc(n);
//}
//
//int calc(int n)
//{
//	int result = 0;
//	int target = 666;
//
//	// 횟수 모두 차감되면 해당 target 반환
//	while (n)
//	{
//		// target이 666이 포함된 숫자면
//		if (check(target) == true)
//		{
//			result = target;
//
//			// 횟수 차감
//			n--;
//		}
//		target++;
//	}
//
//	return result;
//}
//
//bool check(int target)
//{
//	while (666 <= target)
//	{
//		// 666 이 연속되는지 확인
//		if (target % 1000 == 666)
//		{
//			return true;
//		}
//		// 10으로 나눠가면서
//		target /= 10;
//	}
//	return false;
//}