//#include <bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	int k;
//	string secretWord;
//	cin >> k >> secretWord;
//	
//	char result[201][21] = {};
//
//	int col = secretWord.length() / k;
//
//	if (col > 200)
//	{
//		cout << "Buffer Over Error";
//		return 0;
//	}
//
//	int index = secretWord.length() - 1;
//
//	for (int i = col - 1; i >= 0; i--)
//	{
//		int j = 0;
//		if ((i + 1) % 2)
//			j = k - 1;
//
//		for (int l = 0; l < k; l++)
//		{
//			result[i][j] = secretWord[index];
//			if ((i + 1) % 2) j--;
//			else j++;
//			index--;
//		}
//	}
//	
//	for (int j = 0; j < k; j++)
//	{
//		for (int i = 0; i < col; i++)
//		{
//			cout << result[i][j];
//		}
//	}
//}