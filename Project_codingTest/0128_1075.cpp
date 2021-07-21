//#include <iostream>
//using namespace std;
//
//int getMin(char arr[]);
//int getSize(char arr[]);
//int main()
//{
//	char charNum[11] = {};
//	int f;
//	cin >> charNum >> f;
//	charNum[getSize(charNum)] = '0';
//	charNum[getSize(charNum) - 1] = '0';
//
//	int min = getMin(charNum);
//
//	int result = 0;
//	for (int i = min; i <= min + 99; i++)
//	{
//		if (i % f == 0)
//		{
//			result = i % 100;
//			break;
//		}
//	}
//
//	// 결과값이 1자리 수
//	if (result / 10 == 0)
//	{
//		cout << '0' << result;
//	}
//	else if (result == 0)
//	{
//		cout << "00";
//	}
//	else cout << result;
//
//
//	return 0;
//}
//
//int getMin(char arr[])
//{
//	
//	int result = 0;
//	int k = 1;
//
//	for (int i = getSize(arr); i >= 0; i--)
//	{
//		result += (arr[i] - '0') * k;
//		k *= 10;
//	}
//
//	return result;
//}
//
//int getSize(char arr[])
//{
//	for (int i = 0; i <= 10; i++)
//	{
//		if (arr[i] == '\0') return i - 1;
//	}
//
//	return -1;
//}