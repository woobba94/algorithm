//#include <iostream>
//using namespace std;
//
//char arr[1000001] = {};
//
//int main()
//{
//	int count = 0;
//
//	cin.getline(arr, 1000001, '\n');
//
//	for (int i = 0; i < 1000001; i++)
//	{
//		if (arr[i] == '\0')
//		{
//			count++;
//			break;
//		}
//
//		if (arr[i] == ' ')
//		{
//			if (arr[i + 1] == '\0' || i == 0)
//			{
//				count--;
//			}
//			count++;
//		}
//	}
//	cout << count;
//}