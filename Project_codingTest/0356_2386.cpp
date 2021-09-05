//#include <iostream>
//using namespace std;
//
//int main()
//{
//	while (1)
//	{
//		char first;
//		char input[251];
//		cin >> first;
//		cin.clear();
//		if (first == '#') break;
//		cin.getline(input, 252);
//
//		int count = 0;
//		for (int i = 0; i < 250; i++)
//		{
//			if (input[i] == '\0') break;
//
//			if (input[i] == first || input[i] + 32 == first)
//				count++;
//		}
//		cout << first << " " << count << endl;
//	}
//}