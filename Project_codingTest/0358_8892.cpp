//#include <iostream>
//using namespace std;
//
//class Word
//{
//public:
//	char str[10001];
//	int size = 0;
//};
//
//int getSize(char arr[]);
//bool check(char arr[], int size);
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		int k;
//		cin >> k;
//		Word* arr = new Word[k];
//		for (int i = 0; i < k; i++)
//		{
//			cin >> arr[i].str;
//			arr[i].size = getSize(arr[i].str);
//		}
//		bool flag = false;
//		for (int i = 0; i < k; i++)
//		{
//			for (int j = 0; j < k; j++)
//			{
//				char temp[10001];
//				if (i == j) continue;
//				for (int x = 0; x < arr[i].size; x++)
//				{
//					temp[x] = arr[i].str[x];
//				}
//				for (int x = arr[i].size; x < arr[i].size + arr[j].size; x++)
//				{
//					temp[x] = arr[j].str[x - arr[i].size];
//				}
//				if (check(temp, arr[i].size + arr[j].size))
//				{
//					flag = true;
//					for (int x = 0; x < arr[i].size + arr[j].size; x++)
//					{
//						cout << temp[x];
//					}
//					cout << endl;
//					break;
//				}
//			}
//			if (flag) break;
//		}
//		if (!flag) cout << 0 << endl;
//
//	}
//}
//
//bool check(char arr[], int size)
//{
//	for (int i = 0; i < size / 2; i++)
//	{
//		if (arr[i] != arr[size - i - 1])
//			return false;
//	}
//	return true;
//}
//
//int getSize(char arr[])
//{
//	for (int i = 0; i < 10000; i++)
//	{
//		if (arr[i] == '\0')
//			return i;
//	}
//}