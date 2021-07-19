//#include <iostream>
//using namespace std;
//
//int getLastIndex(char arr[]);
//int main()
//{
//	char input[101] = {};
//	cin >> input;
//
//	int last = getLastIndex(input);
//
//	for (int i = 0; i < 101; i++)
//	{
//		if (i >= last) break;
//
//		if (input[i] != input[last])
//		{
//			cout << 0;
//			return 0;
//		}
//		last--;
//	}
//
//	cout << 1;
//}
//
//int getLastIndex(char arr[])
//{
//	for (int i = 0; i < 101; i++)
//	{
//		if (arr[i] == '\0') return i - 1;
//	}
//	return -1;
//}