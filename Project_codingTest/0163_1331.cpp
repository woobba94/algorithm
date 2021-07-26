//#include <iostream>
//using namespace std;
//
//int main()
//{
//	bool arr[6][6] = {};
//
//	int firstX, firstY;
//	int lastX, lastY;
//
//	int before_i = 0, before_j = 0;
//
//	bool isPossible = true;
//
//	bool isFirst = true;
//
//	int  count = 36;
//
//	while (count--)
//	{
//		char input[3] = {};
//		cin >> input;
//
//		int i = input[0] - 'A';
//		int j = input[1] - '1';
//
//		// 마지막 요소 저장 -> 첫 요소와 검사
//		if (count == 0)
//		{
//			lastX = i;
//			lastY = j;
//			if (firstX != lastX &&
//				firstY != lastY &&
//				(abs(firstX - lastX) + abs(firstY - lastY)) == 3)
//			{
//				isPossible = true;
//			}
//			else
//				isPossible = false;
//		}
//
//		// 첫 입력
//		if (isFirst == true)
//		{
//			firstX = i;
//			firstY = j;
//			arr[i][j] = true;
//			isFirst = false;
//		}
//		else
//		{
//			if (before_i != i
//				&& before_j != j
//				&& (abs(before_i - i) + abs(before_j - j)) == 3)
//			{
//				arr[i][j] = true;
//			}
//			else
//			{
//				isPossible = false;
//			}
//		}
//
//		before_i = i;
//		before_j = j;
//	}
//
//	// 방문 안한곳 체크
//	for (int i = 0; i < 6; i++)
//	{
//		for (int j = 0; j < 6; j++)
//		{
//			if (arr[i][j] == false)
//			{
//				isPossible = false;
//				break;
//			}
//		}
//		if (isPossible == false)
//			break;
//	}
//
//
//
//	if (isPossible == true)
//	{
//		cout << "Valid";
//	}
//	else
//	{
//		cout << "Invalid";
//	}
//}