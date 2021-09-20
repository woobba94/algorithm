//#include <bits/stdc++.h>
//using namespace std;
//
//char arr[101][101];
//void swap(int i, int j, int colSize);
//int main()
//{
//	string key, cryptogram;
//	cin >> key >> cryptogram;
//
//	int keySize = key.length();
//	int cryptogramSize = cryptogram.length();
//
//
//	int colSize = cryptogramSize / keySize;
//	int index = 0;
//
//	for (int i = 0; i < keySize; i++)
//	{
//		for (int j = 0; j < colSize; j++)
//		{
//			arr[i][j] = cryptogram[index];
//			index++;
//		}
//	}
//
//	vector<pair<int, int>> changeIndex;
//
//	for (int i = 0; i < keySize; i++)
//	{
//		char min = 97;
//		int minIndex = -1;
//		for (int j = i; j < keySize; j++)
//		{
//			if (min > key[j])
//			{
//				min = key[j];
//				minIndex = j;
//			}
//		}
//		if (i != minIndex && minIndex != -1)
//		{
//			char temp = key[i];
//			key[i] = key[minIndex];
//			key[minIndex] = temp;
//			pair <int, int> ptemp = make_pair(i, minIndex);
//			changeIndex.push_back(ptemp);
//		}
//	}
//	int changeCount = changeIndex.size();
//
//	for (int i = changeCount - 1; i >= 0; i--)
//	{
//		swap(changeIndex[i].first, changeIndex[i].second, colSize);
//	}
//
//	for (int i = 0; i < colSize; i++)
//	{
//		for (int j = 0; j < keySize; j++)
//		{
//			cout << arr[j][i];
//		}
//	}
//
//}
//
//void swap(int i, int j, int colSize)
//{
//	for (int k = 0; k < colSize; k++)
//	{
//		char temp = arr[i][k];
//		arr[i][k] = arr[j][k];
//		arr[j][k] = temp;
//	}
//}