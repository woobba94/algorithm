//#include <iostream>
//
//using namespace std;
//
//int reverse(char num[]);
//int main()
//{
//	char a[4];
//	char b[4];
//
//	cin >> a >> b;
//	int num1 = reverse(a), num2 = reverse(b);
//
//	if (num1 > num2) cout << num1;
//	else cout << num2;
//}
//
//int reverse(char num[])
//{
//	char temp = 0;
//	temp = num[2];
//	num[2] = num[0];
//	num[0] = temp;
//
//	return ((num[0] - '0') * 100 + (num[1] - '0') * 10 + num[2] - '0');
//}