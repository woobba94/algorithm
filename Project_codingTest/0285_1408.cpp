//#include <iostream>
//using namespace std;
//
//int getSec(string time);
//bool check(int num);
//int main()
//{
//	string now, start;
//	cin >> now >> start;
//
//	int nowSec = getSec(now);
//	int startSec = getSec(start);
//
//	int resultSec = 0;
//	if (startSec < nowSec)
//		resultSec = (24 * 3600) - (nowSec - startSec);
//	else
//		resultSec = startSec - nowSec;
//	// 출력 할 시, 분 초
//	int o, m, s;
//	
//	o = resultSec / 3600;
//	resultSec %= 3600;
//	m = resultSec / 60;
//	resultSec %= 60;
//	s = resultSec;
//
//	if (!check(o)) cout << 0 << o;
//	else cout << o;
//	cout << ":";
//
//	if (!check(m)) cout << 0 << m;
//	else cout << m;
//	cout << ":";
//
//	if (!check(s)) cout << 0 << s;
//	else cout << s;
//
//
//}
//bool check(int num)
//{
//	if (num < 10)
//		return false;
//	return true;
//}
//
//int getSec(string time)
//{
//	int sec = 0;
//	sec += ((time[0] - '0') * 10 + (time[1] - '0')) * 3600;
//
//	sec += ((time[3] - '0') * 10 + (time[4] - '0')) * 60;
//
//	sec += (time[6] - '0') * 10 + (time[7] - '0');
//
//	return sec;
//}