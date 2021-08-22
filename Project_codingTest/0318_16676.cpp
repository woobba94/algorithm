//#include <iostream>
//using namespace std;
//
//int main()
//{
//	string n;
//	cin >> n;
//
//	// �ִ밪 = count
//	int result = n.length();
//	bool flag = false;
//	if (n[0] == '1')
//	{
//		for (int i = 1; i < n.length(); i++)
//		{
//			if (n[i] == '0')
//			{
//				flag = true;
//				break;
//			}
//			if ('2' <= n[i])
//				break;
//		}
//	}
//	
//	if (flag)
//		cout << result - 1;
//	else
//		cout << result;
//}