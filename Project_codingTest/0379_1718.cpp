//#include <iostream>
//#include <string>
//using namespace std;
//
//const int SIZE = 30001;
//char input[SIZE] = {};
//
//int main()
//{
//	string base;
//	cin.getline(input, SIZE);
//
//	cin >> base;
//	int k = 0;
//	int baseSize = base.length();
//	for (int i = 0; i < SIZE; i++)
//	{
//		if (input[i] == '\0') break;
//
//		if (input[i] != ' ')
//		{
//			input[i] -= base[k] - 'a' + 1;
//			if (input[i] < 'a')
//			{
//				input[i] += 26;
//			}
//		}
//
//		k++;
//		if (k > baseSize - 1) k = 0;
//	}
//
//	for (int i = 0; i < SIZE; i++)
//	{
//		if (input[i] == '\0') break;
//		cout << input[i];
//	}
//}