//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int t;
//	cin >> t;
//
//	int homeVal[6] = {1, 2, 3, 3, 4, 10};
//	int awayVal[7] = {1, 2, 2, 2, 3, 5, 10};
//	int home[6] = {};
//	int away[7] = {};
//	int round = 1;
//	while (t--)
//	{
//		
//		int homePower = 0;
//		int awayPower = 0;
//		for (int i = 0; i < 6; i++)
//		{
//			cin >> home[i];
//			homePower += homeVal[i] * home[i];
//		}
//
//		for (int i = 0; i < 7; i++)
//		{
//			cin >> away[i];
//			awayPower += awayVal[i] * away[i];
//		}
//
//		cout << "Battle " << round << ": ";
//
//		if (homePower > awayPower)
//			cout << "Good triumphs over Evil" << endl;
//		else if (homePower < awayPower)
//			cout << "Evil eradicates all trace of Good" << endl;
//		else
//			cout << "No victor on this battle field" << endl;
//
//		round++;
//	}
//
//}