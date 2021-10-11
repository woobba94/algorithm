//#include <bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//
//	while (n--)
//	{
//		string input;
//		cin >> input;
//
//		int leftValue = (input[0] - 'A') * pow(26, 2) +
//						(input[1] - 'A') * pow(26, 1) +
//						(input[2] - 'A') * pow(26, 0);
//
//		int rightValue = (input[4] - '0') * 1000 +
//						 (input[5] - '0') * 100 +
//						 (input[6] - '0') * 10 +
//					 	 (input[7] - '0');
//
//		if (abs(leftValue - rightValue) <= 100)
//			cout << "nice";
//		else cout << "not nice";
//		cout << endl;
//	}
//}