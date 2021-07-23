//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n, k;
//
//	cin >> n >> k;
//	int* arr = new int[n + 1]();
//
//	for (int i = 1; i < n + 1; i++)
//	{
//		arr[i] = i;
//	}
//	
//	int count = 0;
//	int index = 0;
//	int size = n;
//	cout << "<";
//	while (size)
//	{
//		if (arr[index] != -1)
//		{
//			if (count == k)
//			{
//				if (size == 1)
//					cout << arr[index] << ">";
//				else
//					cout << arr[index] << ", ";
//				arr[index] = -1;
//				count = 0;
//				size--;
//			}
//			count++;
//			index++;
//		}
//		else
//			index++;
//
//		if (n < index)
//		{
//			index = 1;
//		}
//	}
//}