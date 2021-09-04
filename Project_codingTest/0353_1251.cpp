//#include <iostream>
//using namespace std;
//int strSize = 0;
//char resultStr[50];
//bool isFirst = true;
//int getSize(char arr[]);
//void calc(char arr[], int first, int second);
//void reverse(char arr[]);
//int main()
//{
//	char str[51] = {};
//
//	cin >> str;
//	
//	strSize = getSize(str);
//
//
//	for (int i = 0; i < strSize - 1; i++)
//	{
//		for (int j = i; j < strSize - 1; j++)
//		{
//			if (i >= j)continue;
//			calc(str, i, j);
//		}
//	}
//	
//	for (int i = 0; i < strSize; i++)
//	{
//		cout << resultStr[i];
//	}
//
//}
//
//void calc(char arr[], int first, int second)
//{
//	char a[48] = {};
//	char b[48] = {};
//	char c[48] = {};
//
//	int tempIndex = 0;
//	for (int i = 0; i < first + 1; i++)
//	{
//		a[tempIndex] = arr[i];
//		tempIndex++;
//	}
//	tempIndex = 0;
//	for (int i = first + 1; i < second + 1; i++)
//	{
//		b[tempIndex] = arr[i];
//		tempIndex++;
//	}
//	tempIndex = 0;
//	for (int i = second + 1; i < strSize; i++)
//	{
//		c[tempIndex] = arr[i];
//		tempIndex++;
//	}
//	
//	reverse(a);
//	reverse(b);
//	reverse(c);
//	tempIndex = 0;
//	char result[50];
//	for (int i = 0; i < first + 1; i++)
//	{
//		result[i] = a[tempIndex];
//		tempIndex++;
//	}
//	tempIndex = 0;
//	for (int i = first + 1; i < second + 1; i++)
//	{
//		result[i] = b[tempIndex];
//		tempIndex++;
//	}
//	tempIndex = 0;
//	for (int i = second + 1; i < strSize; i++)
//	{
//		result[i] = c[tempIndex];
//		tempIndex++;
//	}
//
//	if (isFirst)
//	{
//		isFirst = false;
//		for (int i = 0; i < strSize; i++)
//		{
//			resultStr[i] = result[i];
//		}
//	}
//	else
//	{
//		bool isOK = false;
//		for (int i = 0; i < strSize; i++)
//		{
//			if (resultStr[i] > result[i])
//			{
//				isOK = true;
//				break;
//			}
//			else if (resultStr[i] < result[i])
//				break;
//		}
//
//		if (isOK)
//		{
//			for (int i = 0; i < strSize; i++)
//			{
//				resultStr[i] = result[i];
//			}
//		}
//	}
//}
//
//int getSize(char arr[])
//{
//	for (int i = 0; i < 50; i++)
//	{
//		if (arr[i] == '\0')
//			return i;
//	}
//}
//
//void reverse(char arr[])
//{
//	int size = getSize(arr);
//	char temp;
//	for (int i = 0; i < size; i++)
//	{
//		if (size - i <= i) break;
//		temp = arr[i];
//		arr[i] = arr[size - i - 1];
//		arr[size - i - 1] = temp;
//	}
//}
//
