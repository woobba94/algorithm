//#include <bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	int N, K;
//	cin >> N >> K;
//	int searchSize = (N + 1) * 60 * 60;
//	string time;
//	int count = 0;
//
//	for (int i = 0; i < searchSize; i++)
//	{
//		time = "";
//		int temp = i;
//		if (temp / 3600 < 10) time += "0";
//		time += to_string(temp / 3600);
//		temp %= 3600;
//
//		if (temp / 60 < 10) time += "0";
//		time += to_string(temp / 60);
//		temp %= 60;
//
//		if(temp < 10) time += "0";
//		time += to_string(temp);
//
//		for (int j = 0; j < 6; j++)
//		{
//			if (time[j] == K + '0')
//			{
//				count++;
//				break;
//			}
//		}
//	}
//
//	cout << count;
//}