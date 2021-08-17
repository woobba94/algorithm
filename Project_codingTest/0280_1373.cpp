//#include <iostream>
//using namespace std;
//
//int getPow(int num, int k);
//int main()
//{
//	string input;
//	cin >> input;
//	int num = 0;
//
//	while (input.length() % 3 != 0)
//	{
//		input = '0' + input;
//	}
//
//	string output;
//
//	for (int i = 0; i < input.length(); i += 3) 
//	{
//		int temp = 0;
//		
//		for (int j = i; j < i + 3; j++) 
//		{
//			temp += (input[j] - '0') * getPow(2, 2 - (j % 3));
//		}
//		output.push_back(temp + '0');
//	}
//
//	for (int i = 0; i < output.length(); i++)
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