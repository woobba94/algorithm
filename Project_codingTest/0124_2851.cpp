//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int score[10] = {};
//
//	for (int i = 0; i < 10; i++)
//	{
//		cin >> score[i];
//	}
//
//	// 큰 값과 작은 값 선언
//	int maxSum = 0;
//	int minSum = 0;
//
//	for (int i = 0; i < 10; i++)
//	{
//		// 100보다 클 때 까지 인덱스 하나씩 더해줌
//		maxSum = minSum + score[i];
//		if (100 <= maxSum)
//			break;
//
//		// 큰 값이 100을 넘지 않으면 작은 값으로 갱신
//		minSum = maxSum;
//	}
//
//	// 100과의 차이가 maxSum 이 더 작거나 '같으면'
//	if (100 - minSum >= maxSum - 100) 
//		cout << maxSum;
//	else
//		cout << minSum;
//
//}