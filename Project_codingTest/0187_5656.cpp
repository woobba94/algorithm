//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int a, b;
//	char input[3] = {};
//	int caseCount = 1;
//	while (1)
//	{
//		cin >> a;
//		cin >> input;
//		cin >> b;
//
//		if (input[0] == 'E') break;
//
//		cout << "Case " << caseCount << ": ";
//
//		if (input[0] == '!')
//		{
//			if (a != b)
//				cout << "true" << endl;
//			else
//				cout << "false" << endl;
//		}
//		else if (input[0] == '<')
//		{
//			if (input[1] == '=')
//			{
//				if (a <= b)
//					cout << "true" << endl;
//				else
//					cout << "false" << endl;
//			}
//			else
//			{
//				if (a < b)
//					cout << "true" << endl;
//				else
//					cout << "false" << endl;
//			}
//		}
//		else if (input[0] == '>')
//		{
//			if (input[1] == '=')
//			{
//				if (a >= b)
//					cout << "true" << endl;
//				else
//					cout << "false" << endl;
//			}
//			else
//			{
//				if (a > b)
//					cout << "true" << endl;
//				else
//					cout << "false" << endl;
//			}
//		}
//		if (input[0] == '=')
//		{
//			if (a == b)
//				cout << "true" << endl;
//			else
//				cout << "false" << endl;
//		}
//
//		caseCount++;
//	}
//}