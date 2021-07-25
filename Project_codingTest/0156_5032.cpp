//#include <iostream>
//using namespace std;
//
//int main()
//{
//	// 첫째 줄에 준민이가 가지고 있는 빈 병의 수 e, 
//	// 그날 발견한 빈 병의 수 f, 
//	// 새 병으로 바꾸는데 필요한 빈 병의 개수 c가 주어진다.
//	int e, f, c;
//	
//	cin >> e >> f >> c;
//
//	int result = (e + f) / c;
//	int empty = result + (e + f) % c;
//	while (1)
//	{
//		if (empty / c == 0) break;
//		result += empty / c;
//		empty = (empty / c) + empty % c;
//	}
//	
//	cout << result;
//}