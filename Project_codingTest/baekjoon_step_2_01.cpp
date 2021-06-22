////문제
////두 정수 A와 B가 주어졌을 때, A와 B를 비교하는 프로그램을 작성하시오.
////
////입력
////첫째 줄에 A와 B가 주어진다.A와 B는 공백 한 칸으로 구분되어져 있다.
////
////출력
////첫째 줄에 다음 세 가지 중 하나를 출력한다.
////A가 B보다 큰 경우에는 '>'를 출력한다.
////A가 B보다 작은 경우에는 '<'를 출력한다.
////A와 B가 같은 경우에는 '=='를 출력한다.
////
////제한
////- 10000 ≤ A, B ≤ 10000
//
//#include <iostream>
//using namespace std;
//
//int main() {
//	int a, b;
//	while (1)
//	{
//		cin >> a >> b;
//		if (-10000 <= a && -10000 <= b && a <= 10000 && b <= 10000)
//		{
//			if (a > b) cout << ">";
//			else if (a < b) cout << "<";
//			else cout << "==";
//			break;
//		}
//	}
//}