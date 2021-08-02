//#include <iostream>
//using namespace std;
//int getScore(int arr[], int n);
//int main()
//{
//	int home[9] = {};
//	int away[9] = {};
//
//	for (int i = 0; i < 9; i++)
//	{
//		cin >> home[i];
//	}
//
//	for (int i = 0; i < 9; i++)
//	{
//		cin >> away[i];
//	}
//
//	bool flag = false;
//	bool isReversal = false;
//	int homeScore = 0;
//	int awayScore = 0;
//	for (int i = 0; i < 9; i++)
//	{
//		homeScore = getScore(home, i);
//		if(homeScore > awayScore)
//		{
//			flag = true;
//		}
//
//		awayScore = getScore(away, i);
//		if (homeScore < awayScore && flag == true)
//		{
//			isReversal = true;
//			break;
//		}
//	}
//
//	if (isReversal == false)
//		cout << "No";
//	else cout << "Yes";
//}
//
//int getScore(int arr[], int n)
//{
//	int score = 0;
//	for (int i = 0; i < n + 1; i++)
//	{
//		score += arr[i];
//	}
//
//	return score;
//}