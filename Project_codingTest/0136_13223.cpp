//#include <iostream>
//using namespace std;
//
//int toInt(char x, char y);
//int main()
//{
//	char now[9];
//
//	cin >> now;
//
//	char target[9];
//	cin >> target;
//
//	int nowH = toInt(now[0], now[1]);
//	int nowM = toInt(now[3], now[4]);
//	int nowS = toInt(now[6], now[7]);
//
//	int targetH = toInt(target[0], target[1]);
//	int targetM = toInt(target[3], target[4]);
//	int targetS = toInt(target[6], target[7]);
//	
//	int resultH = 0;
//	int resultM = 0;
//	int resultS = 0;
//
//	// target 시간이 더 클때
//	if (nowH < targetH)
//	{
//		resultH = targetH - nowH;
//
//		if (nowM > targetM)
//		{
//			resultH--;
//			targetM += 60;
//		}
//		resultM = targetM - nowM;
//
//		if (nowS > targetS)
//		{
//			resultM--;
//			targetS += 60;
//		}
//		resultS = targetS - nowS;
//	}
//	else if (nowH == targetH)
//	{
//		resultH = 24;
//
//		if (targetM > nowM)
//		{
//			resultH--;
//			nowM += 60;
//			if (targetS > nowS)
//			{
//				resultM--;
//				nowS += 60;
//			}
//		}
//		resultM = nowM - targetM;
//		
//		resultS = nowS - targetS;
//	}
//	// now 가 더 클때
//	else
//	{
//		resultH = 24 - nowH + targetH;
//		if (targetM > nowM)
//		{
//			resultH--;
//			nowM += 60;
//		}
//		resultM = nowM - targetM;
//		if (targetS > nowS)
//		{
//			resultM--;
//			nowS += 60;
//		}
//		resultS = nowS - targetS;
//	}
//	if (resultH == 24) resultH = 0;
//	if (resultH / 10 == 0)
//		cout << '0' << resultH << ':';
//	else cout << resultH << ':';
//
//	if (resultM / 10 == 0)
//		cout << '0' << resultM << ':';
//	else cout << resultM << ':';
//
//	if (resultS / 10 == 0)
//		cout << '0' << resultS;
//	else cout << resultS;
//
//
//}
//
//
//int toInt(char x, char y)
//{
//	return (x - '0') * 10 + (y - '0');
//}