//#include <iostream>
//
//using namespace std;
//void sort(int& p1, int& p2);
//void battle(int* (&arr), int& size, int p1, int p2);
//bool isMeet(int* arr, int size, int p1, int p2);
//int main()
//{
//	// 참가자 수 <= 10000
//	int n = 0;
//	int player1, player2;
//	int result = 1;
//	cin >> n >> player1 >> player2;
//	sort(player1, player2);
//	// 바로 만나는 경우
//	if (player1 % 2 != 0 && player2 - player1 == 1)
//	{
//		cout << result << endl;
//		return 0;
//	}
//
//	int size = n + 1;
//	int* arr = new int[size];
//
//	// 대진표 초기화 ( 1 ~ n )
//	for (int i = 1; i < size; i++)
//	{
//		arr[i] = i;
//	}
//
//	// p1, p2 가 만날때까지 반복
//	while (isMeet(arr, size, player1, player2) == false)
//	{
//		if (size < 4)
//		{
//			break;
//		}
//		result++;
//		battle(arr, size, player1, player2);
//	}
//	// 마지막까지 못 만나면
//	if (size < 2)
//	{
//		cout << -1 << endl;
//	}
//	else
//	{
//		cout << result << endl;
//	}
//	
//}
//
//void battle(int* (&arr), int &size, int p1, int p2)
//{
//	int sizeTemp = 0;
//	int pointer = 1;
//	for (int i = 2; i < size; i += 2)
//	{
//		if (arr[i - 1] == p1)
//		{
//			arr[i] = arr[i - 1];
//		}
//		if (arr[i - 1] == p2)
//		{
//			arr[i] = arr[i - 1];
//		}
//
//		arr[pointer] = arr[i];
//
//		// 넣을 위치 갱신
//		pointer++;
//		sizeTemp++; // 몇 명이 떨어졌는지 기록
//	}
//	// 원소가 홀수개
//	if ((size - 1) % 2 != 0)
//	{
//		// 마지막 원소 마지막에 넣음.
//		arr[pointer] = arr[size - 1];
//		sizeTemp++;
//	}
//
//	size -= sizeTemp;
//}
//
//bool isMeet(int* arr, int size, int p1, int p2)
//{
//	for (int i = 1; i < size; i++)
//	{
//		if (i % 2 != 0)
//		{
//			if (arr[i] == p1 && arr[i + 1] == p2)
//			{
//				return true;
//			}
//		}
//	}
//	return false;
//}
//
//// 작은수를 p1 으로
//void sort(int &p1, int &p2)
//{
//	if (p1 > p2)
//	{
//		int temp = p1;
//		p1 = p2;
//		p2 = temp;
//	}
//}
//
