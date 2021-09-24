//#include <bits/stdc++.h>
//using namespace std;
//
//const int MAX_SIZE = 1001;
//int main()
//{
//	int n;
//	cin >> n;
//	cin.ignore();
//	while (n--)
//	{
//		char input[MAX_SIZE];
//		cin.getline(input, MAX_SIZE);
//		string word = "";
//
//		for (int i = 0; i < MAX_SIZE; i++)
//		{
//			if (input[i] == ' ' || input[i] == '\0')
//			{
//				int wordSize = word.length();
//				for (int j = wordSize - 1; j >= 0; j--)
//				{
//					cout << word[j];
//				}
//				if (input[i] == '\0')
//				{
//					cout << endl;
//					break;
//				}
//				else cout << ' ';
//
//				word = "";
//			}
//			else
//				word += input[i];
//		}
//	}
//	
//}