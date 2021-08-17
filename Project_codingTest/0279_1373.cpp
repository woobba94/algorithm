//#include <iostream>
//using namespace std;
//int getPow(int num, int k);
//int main()
//{
//	string input;
//	cin >> input;
//
//	int num = 0;
//	for (int i = 0; i < input.length(); i++)
//	{
//		if (input[i] == '1')
//		{
//			num += getPow(2, input.length() - 1 - i);
//		}
//	}
//	int result = 0;
//	string output;
//	int k;
//	while (num)
//	{
//		int mod = num % 8;
//		output.push_back(mod + '0');
//		num /= 8;
//	}
//
//	// 역순 출력
//	for (int i = output.length() - 1; i >= 0; i--)
//	{
//		cout << output[i];
//	}
//}
//
//int getPow(int num, int k)
//{
//	int result = num;
//	if (k == 0)
//		return 1;
//	k--;
//	while (k--)
//	{
//		result *= num;
//	}
//
//	return result;
//}