//#include <iostream>
//using namespace std;
//
//int main()
//{
//	char input[10] = {};
//	cin >> input;
//
//	// size »Ì±â
//	int size;
//	for (int i = 0; i < 9; i++)
//	{
//		if (input[i] == '\0')
//		{
//			size = i;
//			break;
//		}
//	}
//
//	int sum1 = 0;
//	int sum2 = 0;
//
//	for (int i = 0; i < size / 2; i++)
//	{
//		sum1 += input[i];
//	}
//
//	for (int i = size / 2; i < size; i++)
//	{
//		sum2 += input[i];
//	}
//
//	if (sum1 == sum2)
//		cout << "LUCKY";
//	else
//		cout << "READY";
//}