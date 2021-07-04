//#include <iostream>
//
//using namespace std;
//void calc(int num);
//
//int main()
//{
//	int n = 1;
//	while (true)
//	{
//		if (n == 9977) break;
//		calc(n);
//		n++;
//	}
//}
//
//void calc(int num)
//{
//	bool flag = false;
//	int result = 0;
//
//	if (num < 10)
//	{
//		for (int i = 1; i < 10; i++)
//		{
//			if (2 * i == num)
//			{
//				flag = true; break; // 만들 수 있는 수
//			}
//			else result = num;
//		}
//	}
//	else if (num < 100)
//	{
//		for (int i = 1; i < 100; i++)
//		{
//			if ((i + i / 10 + i % 10) == num)
//			{
//				flag = true; break; // 만들 수 있는 수
//			}
//			else result = num;
//		}
//	}
//	else if (num < 1000)
//	{
//		for (int i = 1; i < 1000; i++)
//		{
//			if ((i + (i / 100) % 10 + i % 10) == num)
//			{
//				flag = true; break; // 만들 수 있는 수
//			}
//			else result = num;
//		}
//	}
//	else
//	{
//		for (int i = 1; i < 10000; i++)
//		{
//			if ((i + i / 1000 + (i / 100 % 10) + ((i / 10) % 10) + i % 10) == num)
//			{
//				flag = true; break; // 만들 수 있는 수
//			}
//			else result = num;
//		}
//	}
//
//	if (flag == false)
//	{
//		cout << result << endl;
//	}
//	
//}