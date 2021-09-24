//#include <bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	bool isFBI[5] = {};
//	string name;
//	bool isExist = false;
//	for (int i = 0; i < 5; i++)
//	{
//		cin >> name;
//		int len = name.length();
//		for(int j = 0 ; j < len - 2; j++)
//		{
//			if (name[j] == 'F' && name[j + 1] == 'B' && name[j + 2] == 'I')
//			{
//				isExist = true;
//				isFBI[i] = true;
//				break;
//			}
//		}
//	}
//	if (isExist)
//	{
//		for (int i = 0; i < 5; i++)
//		{
//			if (isFBI[i])
//				cout << i + 1 << ' ';
//		}
//	}
//	else
//		cout << "HE GOT AWAY!";
//}