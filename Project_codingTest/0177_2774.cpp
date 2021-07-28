//#include <iostream>
//using namespace std;
//
//void sort(char num[]);
//int getDifCount(char num[]);
//int main()
//{
//	int t;
//	cin >> t;
//	char num[11];
//
//	while (t--)
//	{
//		cin >> num;
//		sort(num);
//		cout << getDifCount(num) << endl;
//	}
//}
//
//int getDifCount(char num[])
//{
//	int count = 1;
//	for (int i = 0; i < 10; i++)
//	{
//		if (num[i + 1] == '\0') break;
//		if (num[i] != num[i + 1])
//			count++;
//	}
//
//	return count;
//}
//
//void sort(char num[])
//{
//	char temp;
//	for (int i = 0; i < 10; i++)
//	{
//		if (num[i] == '\0') break;
//		for (int j = 0; j < 9; j++)
//		{
//			if (num[j + 1] == '\0') break;
//			if (num[j] < num[j + 1])
//			{
//				temp = num[j];
//				num[j] = num[j + 1];
//				num[j + 1] = temp;
//			}
//		}
//	}
//}