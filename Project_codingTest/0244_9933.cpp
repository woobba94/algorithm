//#include <iostream>
//using namespace std;
//
//class S
//{
//public:
//	char arr[14] = {};
//	int size = 0;
//
//	void setSize()
//	{
//		for (int i = 0; i < 14; i++)
//		{
//			if (arr[i] == '\0')
//			{
//				size = i;
//				break;
//			}
//		}
//	}
//
//	char getMidVal()
//	{
//		return arr[size / 2];
//	}
//};
//S reverse(S str);
//bool isEqual(S s1, S s2);
//
//int main()
//{
//	int n;
//	cin >> n;
//	S* str = new S[n];
//	for (int i = 0; i < n; i++)
//	{
//		cin >> str[i].arr;
//		str[i].setSize();
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (isEqual(str[j], reverse(str[i])))
//			{
//				cout << str[i].size << " " << str[i].getMidVal();
//				return 0;
//			}
//		}
//	}
//}
//
//bool isEqual(S s1, S s2)
//{
//	if (s1.size == s2.size)
//	{
//		for (int i = 0; i < s1.size; i++)
//		{
//			if (s1.arr[i] != s2.arr[i])
//			{
//				return false;
//			}
//		}
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
//S reverse(S str)
//{
//	char temp;
//	int i = 0;
//	int j = str.size - 1;
//	while (1)
//	{
//		if (i > j)
//			break;
//		temp = str.arr[i];
//		str.arr[i] = str.arr[j];
//		str.arr[j] = temp;
//		i++;
//		j--;
//	}
//
//	return str;
//}
