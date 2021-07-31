//#include <iostream>
//using namespace std;
//
//int getSize(char input[]);
//int main()
//{
//	int n;
//	cin >> n;
//	while (n--)
//	{
//		char input[1000] = {};
//		cin >> input;
//		int size = getSize(input);
//
//		if (input[size / 2 - 1] == input[size / 2])
//		{
//			cout << "Do-it" << endl;
//		}
//		else
//			cout << "Do-it-Not" << endl;
//	}
//}
//
//int getSize(char input[])
//{
//	for (int i = 0; i < 999; i++)
//	{
//		if (input[i] == '\0')
//			return i + 1;
//	}
//}