//#include <iostream>
//using namespace std;
//
//bool isPossible[1000];
//void init();
//void calc(char input[], int s, int b);
//int main()
//{
//	int n;
//	cin >> n;
//	init();
//	char input[4];
//	
//	int s, b;
//
//	while (n--)
//	{
//		cin >> input;
//		cin >> s >> b;
//		calc(input, s, b);
//	}
//
//	int result = 0;
//	for (int i = 123; i < 999; i++)
//	{
//		if (isPossible[i]) result++;
//	}
//
//	cout << result;
//}
//
//void init()
//{
//	for (int i = 123; i < 999; i++)
//	{
//		if (i % 10 == (i % 100) / 10 ||
//			i % 10 == i / 100 || i / 100 == (i % 100) / 10)
//			continue;
//		if (i % 10 == 0 || (i % 100) / 10 == 0)
//			continue;
//		isPossible[i] = true;
//	}
//}
//
//void calc(char input[], int s, int b)
//{
//	for (int i = 123; i < 1000; i++)
//	{
//		int sCount = 0;
//		int bCount = 0;
//		if(isPossible[i] == true)
//		{
//			if (input[0] - '0' == i / 100) sCount++;
//			if (input[1] - '0' == (i % 100) / 10 ) sCount++;
//			if (input[2] - '0' == i % 10) sCount++;
//
//			if (input[0] - '0' == (i % 100) / 10 ) bCount++;
//			if (input[0] - '0' == i % 10 ) bCount++;
//			if (input[1] - '0' == i / 100 ) bCount++;
//			if (input[1] - '0' == i % 10 ) bCount++;
//			if (input[2] - '0' == i / 100 ) bCount++;
//			if (input[2] - '0' == (i % 100) / 10) bCount++;
//		}
//		if (sCount != s || bCount != b)
//		{
//			isPossible[i] = false;
//		}
//	}
//}