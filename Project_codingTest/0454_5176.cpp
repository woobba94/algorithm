//#include <bits/stdc++.h>
//using namespace std;
//
//const int MAX_SIZE = 501;
//
//int main()
//{
//	int k;
//	cin >> k;
//
//	while(k--)
//	{
//		// 참석 불가자 수
//		int failCount = 0;
//		int p, m; // 참가자 수, 자리 수
//		cin >> p >> m;
//
//		bool isFill[MAX_SIZE] = {};
//
//		for (int i = 0; i < p; i++)
//		{
//			int wantNum;
//			cin >> wantNum;
//
//			// 자리가 비어있으면
//			if (!isFill[wantNum]) isFill[wantNum] = true;
//			else failCount++;
//		}
//
//		cout << failCount << endl;
//	}
//}