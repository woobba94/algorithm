//#include <iostream>
//
//using namespace std;
//void calcPattern(char arr[], char result[]);
//int main()
//{
//	int n = 0;
//	cin >> n;
//	char input[51][51];
//	char result[51] = {};
//	for(int i = 0; i < n; i++)
//	{
//		cin >> input[i];
//	}
//
//	// 첫 패턴 세팅
//	for (int i = 0; i < 50; i++)
//	{
//		if (input[0][i] == '\0') break;
//		result[i] = input[0][i];
//	}
//
//	// 첫 세팅 빼고 체크
//	for (int i = 1; i < n; i++)
//	{
//		calcPattern(input[i], result);
//	}
//
//	// 출력
//	for (int i = 0; i < 50; i++)
//	{
//		if (result[i] == '\0') break;
//		cout << result[i];
//	}
//}
//
//// 패턴 계산
//void calcPattern(char arr[], char result[])
//{
//	for (int i = 0; i < 50; i++)
//	{
//		if (arr[i] == '\0') break;
//		if (result[i] != arr[i]) result[i] = '?';
//	}
//}