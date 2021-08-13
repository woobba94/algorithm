//#include <iostream>
//using namespace std;
//
//int main()
//{
//	char arr[2501] = {};
//	cin.getline(arr, 2501);
//	char target[51] = {};
//	cin.getline(target, 51);
//	int count = 0;
//	for (int i = 0; i < 2501; i++)
//	{
//		if (arr[i] == '\0')
//			break;
//
//		if (arr[i] == '`')
//			continue;
//		bool flag = true;
//		for (int j = 0; j < 51; j++)
//		{
//			if (target[j] == '\0')
//				break;
//
//			if (arr[i + j] != target[j])
//			{
//				flag = false;
//				break;
//			}				
//		}
//		if (flag)
//		{
//			for (int k = i; k < i + 51; k++)
//			{
//				if (target[k - i] == '\0')
//					break;
//				arr[k] = '`';
//			}
//			count++;
//		}
//	}
//	cout << count;
//}