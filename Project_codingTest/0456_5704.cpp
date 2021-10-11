//#include <bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	while (1)
//	{
//		bool isUsed[27] = {};
//
//		string input;
//		getline(cin, input);
//		if (input[0] == '*') return 0;
//
//		int len = input.size();
//
//		for (int i = 0; i < len; i++)
//		{
//			isUsed[input[i] - 'a'] = true;
//		}
//		bool isFangram = true;
//		for (int i = 0; i < 26; i++)
//		{
//			if (!isUsed[i])
//			{
//				isFangram = false;
//				break;
//			}
//		}
//
//		cout << (isFangram ? 'Y' : 'N') << endl;
//
//	}
//}