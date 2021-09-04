//#include <iostream>
//using namespace std;
//
//int getMax(int a, int b);
//
//class Player
//{
//public:
//	int id;
//	int card[5];
//	int score;
//
//	int calc(int index, int cnt, int score)
//	{
//		if (cnt == 3) return score;
//		if (index == 5) return -1;
//		int result = 0;
//		result = getMax(result % 10, calc(index + 1, cnt + 1, score + card[index]) % 10);
//		result = getMax(result % 10, calc(index + 1, cnt, score) % 10);
//
//		return result;
//	}
//};
//
//int main()
//{
//	int n;
//	cin >> n;
//	Player* arr = new Player[n];
//
//	for (int i = 0; i < n; i++)
//	{
//		arr[i].id = i + 1;
//		for (int j = 0; j < 5; j++)
//		{
//			cin >> arr[i].card[j];
//		}
//		arr[i].score = arr[i].calc(0, 0, 0);
//	}
//	int result = 0;
//	int max = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (max <= arr[i].score)
//		{
//			max = arr[i].score;
//			result = arr[i].id;
//		}
//	}
//
//	cout << result;
//
//}
//
//int getMax(int a, int b)
//{
//	if (a < b)
//		return b;
//	return a;
//}