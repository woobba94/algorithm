//#include <iostream>
//using namespace std;
//
//int main()
//{
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//
//	int w, h;
//	cin >> w >> h;
//
//	int p, q;
//	cin >> p >> q;
//
//	int t;
//	cin >> t;
//
//	// 첫 좌표 저장
//	int startP = p;
//	int startQ = q;
//
//	// 방향 우상향으로 초기화
//	bool isRight = true;
//	bool isUp = true;
//
//	int cycleX = w * 2;
//	int cycleY = h * 2;
//
//	int tx = t % cycleX;
//	int ty = t % cycleY;
//
//	while (tx--)
//	{
//		// x방향 설정
//		if (p == w)
//		{
//			isRight = false;
//		}
//		else if (p == 0)
//		{
//			isRight = true;
//		}
//
//		if (isRight == true)
//			p++;
//		else
//			p--;
//	}
//	while (ty--)
//	{
//		// y 방향 설정
//		if (q == h)
//		{
//			isUp = false;
//		}
//		else if (q == 0)
//		{
//			isUp = true;
//		}
//
//		if (isUp == true)
//			q++;
//		else
//			q--;
//	}
//
//	cout << p << " " << q;
//}