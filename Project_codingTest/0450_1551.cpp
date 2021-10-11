//#include <bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	int n, k;
//	cin >> n >> k;
//
//	int* arr = new int[n];
//
//	string input;
//	cin >> input;
//	string tempArr[21] = {};
//	int index = 0;
//	for (int i = 0; i < input.size() + 1; i++)
//	{		
//		if (input[i] == ',' || input[i] == '\0')
//		{
//			if (tempArr[index][0] == '-')
//			{
//				string temp = "";
//				for (int j = 1; j < tempArr[index].size(); j++)
//				{
//					temp += tempArr[index][j];
//				}
//				arr[index] = -stoi(temp);
//			}
//			else
//			{
//				arr[index] = stoi(tempArr[index]);
//			}
//			index++;
//			continue;
//		}
//		else
//		{
//			tempArr[index] += input[i];
//		}
//	}
//
//	while (k--)
//	{
//		for (int i = 0; i < n - 1; i++)
//		{
//			arr[i] = arr[i + 1] - arr[i];
//		}
//		n--;
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		cout << arr[i];
//		if (i == n - 1) break;
//		cout << ",";
//	}
//}