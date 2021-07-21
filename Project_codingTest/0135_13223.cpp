//#include <iostream>
//using namespace std;
//
//int getSec(char arr[]);
//void print(int num);
//bool checkDigit(int num);
//
//int main()
//{
//	// 현재시간
//	char now[9] = {};
//	cin >> now;
//	
//	//목표시간
//	char target[9] = {};
//	cin >> target;
//	int needTime = 0;
//
//	if(getSec(now) > getSec(target))
//		needTime = 86400 - getSec(now) + getSec(target);
//	else
//		needTime = getSec(target) - getSec(now);
//	
//	int hourCount = 0;
//	int minuteCount = 0;
//	int secondCount = 0;
//	while (1)
//	{
//		// 1시간 이상
//		if (needTime >= 3600)
//		{
//			hourCount = needTime / 3600;
//			needTime %= 3600;
//		}
//		// 1시간 이하 1분이상
//		else if (needTime >= 60)
//		{
//			minuteCount = needTime / 60;
//			needTime %= 60;
//		}
//		else
//		{
//			secondCount = needTime;
//			break;
//		}
//	}
//	print(hourCount);
//	cout << ':';
//	print(minuteCount);
//	cout << ':';
//	print(secondCount);
//	cout << endl;
//}
//
//void print(int num)
//{
//	if (checkDigit(num))cout << num;
//	else cout << '0' << num;
//}
//
//// 자리수 체크 : 두자리면 true반환
//bool checkDigit(int num)
//{
//	if (num / 10 == 0) return false;
//	else return true;
//}
//
//int getSec(char arr[])
//{
//	int result = 0;
//
//	int hour = 0, minute = 0, second = 0;
//	int k = 10;
//	for (int i = 0; i < 2; i++)
//	{
//		hour += (arr[i] - '0') * k;
//		k /= 10;
//	}
//	k = 10;
//	for (int i = 3; i < 5; i++)
//	{
//		minute += (arr[i] - '0') * k;
//		k /= 10;
//	}
//	k = 10;
//	for (int i = 6; i < 8; i++)
//	{
//		second += (arr[i] - '0') * k;
//		k /= 10;
//	}
//
//	result = hour * 3600 + minute * 60 + second;
//
//	return result;
//}