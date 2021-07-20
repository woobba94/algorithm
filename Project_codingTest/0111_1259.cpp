//#include <iostream>
//using namespace std;
//
//int getLastIndex(char arr[]);
//int main()
//{
//	//  1 이상 99999 이하 (6자리)
//	char input[7] = {};
//	int last = 5;
//	bool flag = true;
//	while (1)
//	{
//		cin >> input;
//		if (input[0] == '0') break;
//
//		last = getLastIndex(input);
//
//		for (int i = 0; i < 6; i++)
//		{
//			
//			if (i >= last) 
//				break;
//
//			if (input[i] != input[last])
//			{
//				flag = false;
//			}
//
//			last--;
//		}
//
//		if (flag == false) cout << "no" << endl;
//		else cout << "yes" << endl;
//
//		flag = true;
//	}
//	
//}
//
//int getLastIndex(char arr[])
//{
//	for (int i = 0; i < 101; i++)
//	{
//		if (arr[i] == '\0') return i - 1;
//	}
//	return -1;
//}