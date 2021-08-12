//#include <iostream>
//using namespace std;
//
//long long getInt(char* arr, int i, int count);
//long long getMultiple(int count);
//int main()
//{
//	int n = 0;
//	cin >> n;
//	char* arr = new char[n];
//
//	cin >> arr;
//	long long sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (0 <= arr[i] - '0' && arr[i] - '0' <= 9)
//		{
//			int start = i;
//			int count = 1;
//			int j = i;
//			if (j < n - 1)
//				j = i + 1;
//			while (1)
//			{
//				if (9 < arr[j] - '0' || j == n)
//					break;
//				else
//				{
//					count++;
//					i++;
//				}
//				j++;
//			}
//			sum += getInt(arr, start, count);
//		}
//	}
//
//	cout << sum;
//}
//
//long long getInt(char* arr, int i, int count)
//{
//	long long result = 0;
//	int size = i + count;
//	long long multiple = getMultiple(count);
//	for(int k = i; k < size; k++)
//	{
//		result += (arr[k] - '0') * multiple;
//		multiple /= 10;
//	}
//	return result;
//}
//
//long long getMultiple(int count)
//{
//	long long result = 1;
//	while (1 < count)
//	{
//		result *= 10;
//		count--;
//	}
//	return result;
//}