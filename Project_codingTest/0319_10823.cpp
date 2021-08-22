//#include <iostream>
//using namespace std;
//
//int toInt(string num);
//int main()
//{
//	char input[10001];
//	string num;
//	int sum = 0;
//	while (cin.getline(input, 10001))
//	{
//		for (int i = 0; i < 10001; i++)
//		{
//			if (input[i] == '\0')break;
//			if (input[i] != ',')
//				num.push_back(input[i]);
//			else
//			{
//				sum += toInt(num);
//				num.clear();
//			}
//		}
//	}
//	sum += toInt(num);
//	cout << sum;
//}
//
//int toInt(string num)
//{
//	int result = 0;
//	int k = 1;
//	for (int i = num.length() - 1; i >= 0; i--)
//	{
//		result += (num[i] - '0') * k;
//		k *= 10;
//	}
//	return result;
//}