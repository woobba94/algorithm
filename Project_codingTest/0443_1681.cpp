//#include <bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	int N;
//	cin >> N;
//	char L;
//	cin >> L;
//	
//	string lastNum;
//	int count = 0;
//	int k = 1;
//	while(1)
//	{
//		bool flag = true;
//		string num = to_string(k);
//		int len = num.length();
//		for (int i = 0; i < len; i++)
//		{
//			if (num[i] == L)
//			{
//				flag = false;
//				break;
//			}
//		}
//
//		if (flag) count++;
//
//		if (count == N)
//		{
//			lastNum = num;
//			break;
//		}
//		k++;
//	}
//
//	cout << lastNum;
//}