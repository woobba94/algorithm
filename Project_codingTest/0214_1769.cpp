//#include <iostream>
//using namespace std;
//
//char input[1000001] = {};
//void calc(char input[]);
//int main()
//{
//	
//	cin >> input;
//	calc(input);
//}
//
//void calc(char input[])
//{
//	int count = 0;
//	int sum = 0;
//	int size = 0;
//	for (int i = 0; i < 1000001; i++)
//	{
//		if (input[i] == '\0')
//		{
//			size = i;
//			break;
//		}
//		sum += input[i] - '0';
//	}
//	if (size != 1)
//	{
//		count = 1;
//		while (9 < sum)
//		{
//			sum = 0;
//			count++;
//
//			for (int i = 0; i < 1000001; i++)
//			{
//				if (input[i] == '\0')
//				{
//					size = i;
//					break;
//				}
//				sum += input[i] - '0';
//			}
//
//			int* arr = new int[size]();
//			int i = 0;
//			while (sum)
//			{
//				arr[i] = sum % 10;
//				sum /= 10;
//				i++;
//			}
//			bool flag = false;
//			int k = 0;
//			for (int i = size - 1; i >= 0; i--)
//			{
//				if (arr[i] != 0)
//				{
//					flag = true;
//				}
//
//				if (flag == true)
//				{
//					input[k] = arr[i] + '0';
//					k++;
//				}
//			}
//			for (int j = k; j < 1000001; j++)
//			{
//				if (input[j] == '\0')
//				{
//					break;
//				}
//				else
//				{
//					input[i] = '\0';
//				}
//			}
//
//			for (int i = 0; i < 1000001; i++)
//			{
//				if (input[i] == '\0')
//				{
//					size = i;
//					break;
//				}
//				sum += input[i] - '0';
//			}
//		}
//	}
//	
//	cout << count << endl;
//	if (sum % 3 == 0)
//		cout << "YES";
//	else
//		cout << "NO";
//
//}