//#include <bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	string input;
//	cin >> input;
//	int len = input.length();
//	int count = 0;
//
//	for (int i = 0; i < len; i++)
//	{
//		count++;
//		if (i > 0)
//		{
//			if (input[i] == '=' && (
//				input[i - 1] == 'c' || 
//				input[i - 1] == 's' || 
//				input[i - 1] == 'z'))
//			{
//				if (i == 1) count--;
//				else
//				{
//					if (input[i - 1] == 'z' && input[i - 2] == 'd') count -= 2;
//					else count--;
//				}
//			}
//			else if (input[i] == '-' && (input[i - 1] == 'c' || input[i - 1] == 'd'))
//				count--;
//			else if (input[i] == 'j' && (input[i - 1] == 'l' || input[i - 1] == 'n'))
//				count--;
//		}
//	}
//
//	cout << count;
//}