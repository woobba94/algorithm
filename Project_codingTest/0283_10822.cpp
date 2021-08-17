//#include <iostream>
//using namespace std;
//
//int calc(string temp);
//int main()
//{
//	string input;
//	cin >> input;
//	string temp;
//	int sum = 0;
//	for (int i = 0; i < input.length() + 1; i++)
//	{
//		if (input[i] == ',' || i == input.length())
//		{
//			sum += calc(temp);
//			temp.clear();
//		}
//		else
//		{
//			temp.push_back(input[i]);
//		}
//	}
//
//	cout << sum;
//}
//
//int calc(string temp)
//{
//	int result = 0;
//	int k = temp.length();
//	int i = 1;
//	while (k)
//	{
//		result += (temp[k - 1] - '0') * 10 * i;
//		i *= 10;
//		k--;
//	}
//	return result / 10;
//}