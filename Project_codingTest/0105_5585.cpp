//#include <iostream>
//using namespace std;
//
//int main()
//{
//	// 거스름돈 개수
//	int changeCount = 0;
//
//	// 낼 금액
//	int price = 0;
//	cin >> price;
//
//	// 거스름돈
//	int change = 1000 - price;
//
//	// 거스름돈 단위
//	int unit[6] = { 500,100,50,10,5,1 };
//	int index = 0;
//
//	while (change)
//	{
//		// 현재 단위로 거슬러 줄 수 있으면
//		if (unit[index] <= change)
//		{
//			changeCount++;
//			change -= unit[index];
//		}
//		// 안되면 다음 단위
//		else index++;
//	}
//
//	cout << changeCount;
//}