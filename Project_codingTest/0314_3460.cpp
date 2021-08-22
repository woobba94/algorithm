//#include <iostream>
//using namespace std;
//
//string get10to2(int num);
//int main()
//{
//	int t;
//	cin >> t;
//	int n;
//	while (t--)
//	{
//		cin >> n;
//		string binary = get10to2(n);
//		for (int i = 0; i < binary.length(); i++)
//		{
//			if (binary[i] == '1')
//				cout << i << " ";
//		}
//		cout << endl;
//	}
//	
//}
//
//string get10to2(int num)
//{
//	string result;
//	int i = 0;
//	while (num)
//	{
//		result.push_back(num % 2 + '0');
//		num /= 2;
//		i++;
//	}
//
//	return result;
//}