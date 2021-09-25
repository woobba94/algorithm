//#include <bits/stdc++.h>
//using namespace std;
//void print(int x);
//int main()
//{
//	string nowTime, afterTime;
//	cin >> nowTime >> afterTime;
//
//	int nowSec = 0, afterSec = 0;
//	int len = nowTime.length();
//	for (int i = 0; i < len; i++)
//	{
//		if (i == 0)
//		{
//			nowSec += ((nowTime[i] - '0') * 10) * 3600;
//			afterSec += ((afterTime[i] - '0') * 10) * 3600;
//		}
//		else if (i == 1)
//		{
//			nowSec += (nowTime[i] - '0') * 3600;
//			afterSec += (afterTime[i] - '0') * 3600;
//		}
//		else if (i == 3)
//		{
//			nowSec += ((nowTime[i] - '0') * 10) * 60;
//			afterSec += ((afterTime[i] - '0') * 10) * 60;
//		}
//		else if (i == 4)
//		{
//			nowSec += (nowTime[i] - '0') * 60;
//			afterSec += (afterTime[i] - '0') * 60;
//		}
//		else if (i == 6)
//		{
//			nowSec += (nowTime[i] - '0') * 10;
//			afterSec += (afterTime[i] - '0') * 10;
//		}
//		else if (i == 7)
//		{
//			nowSec += nowTime[i] - '0';
//			afterSec += afterTime[i] - '0';
//		}
//	}
//	int resultSec = 0;
//	if (nowSec >= afterSec)
//		resultSec = (3600 * 24) - nowSec + afterSec;
//	else
//		resultSec = afterSec - nowSec;
//
//	print(resultSec / 3600);
//	cout << ':';
//	print((resultSec % 3600) / 60);
//	cout << ':';
//	print((resultSec % 3600) % 60);
//}
//
//void print(int x)
//{
//	if (x < 10)
//		cout << '0' << x;
//	else
//		cout << x;
//}