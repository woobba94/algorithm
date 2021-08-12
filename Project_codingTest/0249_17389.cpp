//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//	char* arr = new char[n];
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//
//	int bonus = 0;
//	int score = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (arr[i] == 'O')
//		{
//			score += (i + 1 + bonus);
//			bonus++;
//		}
//		else
//		{
//			bonus = 0;
//		}
//	}
//
//	cout << score;
//}