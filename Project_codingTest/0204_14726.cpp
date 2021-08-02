//#include <iostream>
//using namespace std;
//
//char getChar(int n);
//int getInt(char c);
//bool calc(char arr[]);
//
//int main()
//{
//	char input[17] = {};
//
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		cin >> input;
//		if (calc(input))
//			cout << "T" << endl;
//		else
//			cout << "F" << endl;
//	}
//}
//
//bool calc(char arr[])
//{
//	for (int i = 0; i < 16; i++)
//	{
//		if ((i + 1) % 2 != 0)
//		{
//			int temp = getInt(arr[i]) * 2;
//			if (temp >= 10)
//			{
//				temp = temp % 10 + temp / 10;
//			}
//			arr[i] = getChar(temp);
//		}
//	}
//
//	int sum = 0;
//	for (int i = 0; i < 16; i++)
//	{
//		sum += getInt(arr[i]);
//	}
//
//	if (sum % 10 == 0)
//		return true;
//	else return false;
//}
//char getChar(int n)
//{
//	return n + '0';
//}
//
//int getInt(char c)
//{
//	return c - '0';
//}