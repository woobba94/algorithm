//#include <iostream>
//using namespace std;
//
//void cal(int n);
//
//int main() {
//	int n = 0;
//	cin >> n;
//	
//	cal(n);
//
//}
//
//void cal(int n)
//{
//	int count = 0;
//
//	for (int i = 1; i <= n; i++)
//	{
//		if (100 <= i)
//		{
//			int a = i / 100;
//			int b = (i - (a * 100)) / 10;
//			int c = i % 10;
//			if ((a - b) == (b - c)) count++;
//		}
//		else count++;
//	}
//	cout << count << endl;
//}