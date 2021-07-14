//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int a, b, v;
//	cin >> a >> b >> v;
//	// a : up
//	// b : down
//	// v : leng
//
//	int speed = a - b;
//	int distance = v - a;
//	// 시간 = 거리 / 속력
//	int date = distance / speed;
//
//	// 딱 맞게 올라가면 다음날 아침에 a만큼 이동(date += 1)
//	if (distance % speed == 0)
//	{
//		date += 1;
//	}
//	else // 하루 더 올라간 후(date += 1) 다음날 아침 a만큼 이동(date += 1)
//	{
//		date += 2;
//	}
//
//	cout << date;
//}