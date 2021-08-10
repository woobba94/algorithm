//#include <iostream>
//using namespace std;
//
//class String
//{
//public:
//	int size;
//	char str[51] = {};
//	bool isOverlap = false;
//
//	int getSize()
//	{
//		for (int i = 0; i < 51; i++)
//		{
//			if (str[i] == '\0')
//			{
//				return i;
//			}
//		}
//	}
//};
//
//int n;
//void sortBySize(String* arr);
//void sortByChar(String* arr);
//
//int main()
//{
//	
//	cin >> n;
//	String* arr = new String[n];
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i].str;
//		arr[i].size = arr[i].getSize();
//	}
//
//	sortBySize(arr);
//	sortByChar(arr);
//
//	for (int i = 0; i < n; i++)
//	{
//		if(!arr[i].isOverlap)
//			cout << arr[i].str << endl;
//	}
//
//
//}
//
//void sortBySize(String* arr)
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n - 1; j++)
//		{
//			if (arr[j].size > arr[j + 1].size)
//			{
//				String temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//
//void sortByChar(String* arr)
//{
//	int flag = true;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (arr[j].size == arr[j + 1].size)
//			{
//				flag = true;
//				for (int k = 0; k < arr[j].size; k++)
//				{
//					if (arr[j].str[k] != arr[j + 1].str[k])
//					{
//						flag = false;
//
//						if (arr[j].str[k] > arr[j + 1].str[k])
//						{
//							String temp = arr[j];
//							arr[j] = arr[j + 1];
//							arr[j + 1] = temp;
//							break;
//						}
//					}
//				}
//				if (flag == true)
//				{
//					arr[j].isOverlap = true;
//				}
//			}
//		}
//	}
//}