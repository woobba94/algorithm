//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int arr[506][506] = {};
//int n, m;
//int getMax(int i, int j);
//int main()
//{
//	
//	cin >> n >> m;
//
//	for (int i = 3; i < n + 3; i++)
//	{
//		for (int j = 3; j < m + 3; j++)
//		{
//			cin >> arr[i][j];
//		}
//	}
//	int result = 0;
//	for (int i = 3; i < n + 3; i++)
//	{
//		for (int j = 3; j < m + 3; j++)
//		{
//			result = max(result, getMax(i, j));
//		}
//	}
//
//	cout << result;
//
//}
//
//int getMax(int i, int j)
//{
//	int sum = 0;
//	for (int cycle = 0; cycle < 4; cycle++)
//	{
//		int temp = 0;
//		// ㅡ 블럭
//		for (int k = 0; k < 4; k++)
//		{
//			if (cycle == 0)
//			{
//				temp += arr[i + k][j];
//			}
//			else if (cycle == 1)
//			{
//				temp += arr[i - k][j];
//			}
//			else if (cycle == 2)
//			{
//				temp += arr[i][j + k];
//			}
//			else
//			{
//				temp += arr[i][j - k];
//			}
//		}
//		sum = max(sum, temp);
//		temp = 0;
//		// ㅁ 블럭
//		if (cycle == 0)
//		{
//			temp = arr[i][j]
//				+ arr[i][j + 1]
//				+ arr[i + 1][j]
//				+ arr[i + 1][j + 1];
//		}
//		else if (cycle == 1)
//		{
//			temp = arr[i][j]
//				+ arr[i][j + 1]
//				+ arr[i - 1][j]
//				+ arr[i - 1][j + 1];
//		}
//		else if (cycle == 2)
//		{
//			temp = arr[i][j]
//				+ arr[i][j - 1]
//				+ arr[i + 1][j]
//				+ arr[i + 1][j - 1];
//		}
//		else
//		{
//			temp = arr[i][j]
//				+ arr[i][j - 1]
//				+ arr[i - 1][j]
//				+ arr[i - 1][j - 1];
//		}
//
//		sum = max(sum, temp);
//		temp = 0;
//		int temp2 = 0;
//		// ㄱ 블럭
//		if (cycle == 0)
//		{
//			temp = arr[i][j]
//				+ arr[i + 1][j]
//				+ arr[i + 2][j]
//				+ arr[i + 2][j - 1];
//
//			temp2 = arr[i][j]
//				+ arr[i + 1][j]
//				+ arr[i + 2][j]
//				+ arr[i + 2][j + 1];
//
//			temp = max(temp, temp2);
//		}
//		else if (cycle == 1)
//		{
//			temp = arr[i][j]
//				+ arr[i][j + 1]
//				+ arr[i][j + 2]
//				+ arr[i - 1][j + 2];
//
//			temp2 = arr[i][j]
//				+ arr[i][j + 1]
//				+ arr[i][j + 2]
//				+ arr[i + 1][j + 2];
//
//			temp = max(temp, temp2);
//		}
//		else if (cycle == 2)
//		{
//			temp = arr[i][j]
//				+ arr[i][j - 1]
//				+ arr[i][j - 2]
//				+ arr[i + 1][j - 2];
//
//			temp2 = arr[i][j]
//				+ arr[i][j - 1]
//				+ arr[i][j - 2]
//				+ arr[i - 1][j - 2];
//			
//			temp = max(temp, temp2);
//		}
//		else
//		{
//			temp = arr[i][j]
//				+ arr[i - 1][j]
//				+ arr[i - 2][j]
//				+ arr[i - 2][j - 1];
//
//			temp2 = arr[i][j]
//				+ arr[i - 1][j]
//				+ arr[i - 2][j]
//				+ arr[i - 2][j + 1];
//
//			temp = max(temp, temp2);
//		}
//
//		sum = max(sum, temp);
//		temp = 0;
//		temp2 = 0;
//		// ㄱㄴ 블럭
//		if (cycle == 0)
//		{
//			temp = arr[i][j]
//				+ arr[i + 1][j]
//				+ arr[i + 1][j + 1]
//				+ arr[i + 2][j + 1];
//
//			temp2 = arr[i][j]
//				+ arr[i + 1][j]
//				+ arr[i + 1][j - 1]
//				+ arr[i + 2][j - 1];
//
//			temp = max(temp, temp2);
//		}
//		else if (cycle == 1)
//		{
//			temp = arr[i][j]
//				+ arr[i][j + 1]
//				+ arr[i - 1][j + 1]
//				+ arr[i - 1][j + 2];
//
//			temp2 = arr[i][j]
//				+ arr[i][j + 1]
//				+ arr[i + 1][j + 1]
//				+ arr[i + 1][j + 2];
//
//			temp = max(temp, temp2);
//		}
//		else if (cycle == 2)
//		{
//			temp = arr[i][j]
//				+ arr[i + 1][j]
//				+ arr[i + 1][j + 1]
//				+ arr[i + 2][j + 1];
//
//			temp2 = arr[i][j]
//				+ arr[i + 1][j]
//				+ arr[i + 1][j - 1]
//				+ arr[i + 2][j - 1];
//
//			temp = max(temp, temp2);
//		}
//		else
//		{
//			temp = arr[i][j]
//				+ arr[i][j - 1]
//				+ arr[i - 1][j - 1]
//				+ arr[i - 1][j - 2];
//
//			temp2 = arr[i][j]
//				+ arr[i][j - 1]
//				+ arr[i + 1][j - 1]
//				+ arr[i + 1][j - 2];
//
//			temp = max(temp, temp2);
//		}
//
//		sum = max(sum, temp);
//		temp = 0;
//		// ㅜ 블럭
//		if (cycle == 0)
//		{
//			temp = arr[i][j]
//				+ arr[i - 1][j]
//				+ arr[i][j - 1]
//				+ arr[i][j + 1];
//		}
//		else if (cycle == 1)
//		{
//			temp = arr[i][j]
//				+ arr[i - 1][j]
//				+ arr[i + 1][j]
//				+ arr[i][j + 1];
//		}
//		else if (cycle == 2)
//		{
//			temp = arr[i][j]
//				+ arr[i][j + 1]
//				+ arr[i][j - 1]
//				+ arr[i + 1][j];
//		}
//		else
//		{
//			temp = arr[i][j]
//				+ arr[i - 1][j]
//				+ arr[i + 1][j]
//				+ arr[i][j - 1];
//		}
//
//		sum = max(sum, temp);
//	}
//	return sum;
//}