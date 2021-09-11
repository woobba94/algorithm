//#include <iostream>
//#include <algorithm>
//#include <cmath>
//#include <string>
//using namespace std;
//
//bool button[10] = { 1,1,1,1,1,1,1,1,1,1 };
//
//bool check(int num);
//int main()
//{
//	int n;
//	cin >> n;
//	
//	int k = 1000001;
//	int tempCount = 0;
//
//	int m;
//	cin >> m;
//
//	int falseButton;
//	for (int i = 0; i < m; i++)
//	{
//		cin >> falseButton;
//		button[falseButton] = false;
//	}
//
//	int minCount = 1000001;
//	for (int i = 0; i <= 1000001; i++)
//	{
//		if (check(i))
//		{
//			if (abs(i - n) < k)
//			{
//				k = abs(i - n);
//				tempCount = to_string(i).length() + abs(i - n);
//				minCount = min(minCount, tempCount);
//			}
//		}
//	}
//
//	cout << min(abs(n - 100), minCount);
//}
//
//bool check(int num)
//{
//	if (num == 0) 
//	{
//		if (button[0] == false)
//			return false;
//		else
//			return true;
//	}
//	while (num)
//	{
//		if (button[num % 10] == false)
//			return false;
//
//		num /= 10;
//	}
//	return true;
//}