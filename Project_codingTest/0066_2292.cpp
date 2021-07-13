//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int roomNum = 0;
//
//	cin >> roomNum;
//
//	// 커버 가능한 수 범위
//	int erea = 1;
//
//	// 더해주는 수
//	int sumVal = 6;
//
//	// 1층부터 시작
//	int layer = 1;
//
//	while (1)
//	{
//		// 방이 커버가능하면
//		if (roomNum <= erea)
//			break;
//
//		erea += sumVal;
//		sumVal += 6;
//		layer++;
//	}
//	cout << layer;
//}