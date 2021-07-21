//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	int* students = new int[n];
//	int* cards = new int[m];
//
//	// 카드 세팅 1 ~ m
//	for (int i = 0; i < m; i++)
//	{
//		cards[i] = i + 1;
//	}
//
//	// 학생 번호 입력
//	for (int i = 0; i < n; i++)
//	{
//		cin >> students[i];
//	}
//
//	
//	int cardCount = 0;
//
//	int index = 0;
//
//	for (int i = 0; i < n - 1; i++)
//	{
//		if (students[i] % cards[cardCount] >
//			students[i + 1] % cards[cardCount])
//		{
//			int temp = students[i];
//			students[i] = students[i + 1];
//			students[i + 1] = temp;
//		}
//		// 마지막 학생 도달
//		if (i == n - 2)
//		{
//			cardCount++;
//			i = -1;
//		}
//		if (cardCount == m) break;
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		cout << students[i] << endl;
//	}
//}