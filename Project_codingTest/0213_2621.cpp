//#include <iostream>
//using namespace std;
//class Card
//{
//public:
//	char color = ' ';
//	int num = 0;
//};
//
//void sortForNum(Card c[]);
//bool isFlush(Card c[]);
//bool isStraight(Card c[]);
//int getSameCount(Card c[]);
//int getSameSetCount(Card c[]);
//
//int main()
//{
//	Card card[5] = {};
//
//	for (int i = 0; i < 5; i++)
//	{
//		cin >> card[i].color >> card[i].num;
//	}
//
//	sortForNum(card);
//
//	// 스티플
//	if (isFlush(card) && isStraight(card))
//	{
//		cout << card[4].num + 900;
//		return 0;
//	}
//	// 포카드
//	if (getSameCount(card) == 4)
//	{
//		cout << card[2].num + 800;
//		return 0;
//	}
//	// 풀하우스
//	if (card[0].num == card[1].num &&
//		card[1].num == card[2].num &&
//		card[2].num != card[3].num &&
//		card[3].num == card[4].num)
//	{
//		cout << card[0].num * 10 + card[4].num + 700;
//		return 0;
//
//	}
//	if (card[0].num == card[1].num &&
//		card[1].num != card[2].num &&
//		card[2].num == card[3].num &&
//		card[3].num == card[4].num)
//	{
//		cout << card[4].num * 10 + card[0].num + 700;
//		return 0;
//	}
//	// 플러쉬
//	if (isFlush(card))
//	{
//		cout << card[4].num + 600;
//		return 0;
//	}
//	// 스트레이트
//	if (isStraight(card))
//	{
//		cout << card[4].num + 500;
//		return 0;
//	}
//	// 트리플
//	if (getSameCount(card) == 3)
//	{
//		cout << card[2].num + 400;
//		return 0;
//	}
//	// 투페어
//	if (getSameSetCount(card) == 2)
//	{
//		int num1 = 0;
//		int num2 = 0;
//		bool flag = false;
//		for (int i = 0; i < 4; i++)
//		{
//			if (flag == false && card[i].num == card[i + 1].num)
//			{
//				num1 = card[i].num;
//				flag = true;
//			}
//			else if (flag == true && card[i].num == card[i + 1].num)
//			{
//				num2 = card[i].num;
//			}
//		}
//
//		cout << num2 * 10 + num1 + 300;
//		return 0;
//	}
//	// 원페어
//	if (getSameSetCount(card) == 1)
//	{
//		for (int i = 0; i < 4; i++)
//		{
//			if (card[i].num == card[i + 1].num)
//			{
//				cout << card[i].num + 200;
//				return 0;
//			}
//		}
//	}
//	else
//	{
//		cout << card[4].num + 100;
//		return 0;
//	}
//}
//// 플러쉬 검사
//bool isFlush(Card c[])
//{
//	for (int i = 0; i < 4; i++)
//	{
//		if (c[i].color != c[i + 1].color)
//			return false;
//	}
//	return true;
//}
//
//// 스트레이트 검사
//bool isStraight(Card c[])
//{
//	for (int i = 0; i < 4; i++)
//	{
//		if (c[i].num != c[i + 1].num - 1)
//			return false;
//	}
//	return true;
//}
//
//// 같은카드 검사
//int getSameCount(Card c[])
//{
//	int result1 = 1;
//	int result2 = 1;
//	bool flag = false;
//	for (int i = 0; i < 4; i++)
//	{
//		if (flag == false && c[i].num == c[i + 1].num)
//		{
//			result1++;
//		}
//		else if(c[i].num == c[i + 1].num)
//		{
//			result2++;
//		}
//		else
//		{
//			flag = true;
//		}
//	}
//
//	if (result1 > result2)
//		return result1;
//	else
//		return result2;
//}
//
//int getSameSetCount(Card c[])
//{
//	int result = 4;
//	for (int i = 0; i < 4; i++)
//	{
//		if (c[i].num != c[i + 1].num)
//			result--;
//	}
//
//	return result;
//}
//
//void sortForNum(Card c[])
//{
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			if (c[j].num > c[j + 1].num)
//			{
//				int temp = c[j].num;
//				c[j].num = c[j + 1].num;
//				c[j + 1].num = temp;
//			}
//		}
//	}
//}