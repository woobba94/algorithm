//#include <iostream>
//using namespace std;
//
//
//int getSize(char arr[]);
//int main()
//{
//	char target[11];
//	cin >> target;
//	int targetSize = getSize(target);
//
//	int n;
//	cin >> n;
//	char str[11];
//
//	int result = 0;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> str;
//		bool flag = false;
//		for (int j = 0; j < 10; j++)
//		{
//			int count = targetSize;
//			int temp = j;
//			if (flag) break;
//			for (int k = 0; k < targetSize; k++)
//			{
//				if (str[temp] == target[k])
//				{
//					count--;
//					temp++;
//					if (temp > 9) temp = 0;
//					if (count == 0) flag = true;
//				}
//				else
//					break;
//			}
//		}
//		if (flag) result++;
//	}
//	cout << result;
//	
//}
//
//int getSize(char arr[])
//{
//	for (int i = 0; i < 10; i++)
//	{
//		if (arr[i] == '\0')
//			return i;
//	}
//}