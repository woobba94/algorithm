//#include <bits/stdc++.h>
//using namespace std;
//deque <string> arr;
//int arrSize;
//int main()
//{
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		bool isReverse = false;
//		string P;
//		cin >> P;
//		int size;
//		cin >> size;
//		arrSize = size;
//		bool isError = false;
//		string inputArr;
//		cin >> inputArr;
//		int inputArrLen = inputArr.length();
//		string temp;
//		for (int i = 1; i < inputArrLen; i++)
//		{
//			if (inputArr[i] == ',' || i == inputArrLen - 1)
//			{
//				int tempLen = temp.length();
//				for (int j = 0; j < tempLen; j++)
//				{
//					if (temp[j] != '0' || j == tempLen - 1) break;
//					else temp.erase(0, 1);
//				}
//				arr.push_back(temp);
//				temp = "";
//			}
//			else
//				temp += inputArr[i];
//		}
//		int PLen = P.length();
//		for (int i = 0; i < PLen; i++)
//		{
//			if (P[i] == 'R')
//			{
//				if (isReverse) isReverse = false;
//				else isReverse = true;
//			}
//			else
//			{
//				if (!arrSize)
//				{
//					isError = true;
//					break;
//				}
//				else
//				{
//					if (isReverse) arr.pop_back();
//					else arr.pop_front();
//					arrSize--;
//				}
//			}
//		}
//		if (isError) 
//		{
//			cout << "error\n";
//		}
//		else
//		{
//			cout << '[';
//			if (isReverse)
//			{
//				for (int i = arrSize - 1; i >= 0; i--)
//				{
//					cout << arr[i];
//					if (i != 0) cout << ",";
//				}
//			}
//			else
//			{
//				for (int i = 0; i < arrSize; i++)
//				{
//					cout << arr[i];
//					if (i != arrSize - 1) cout << ",";
//				}
//			}
//			cout << "]\n";
//		}
//		arr.clear();
//	}
//}