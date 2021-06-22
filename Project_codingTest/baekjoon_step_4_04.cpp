//#include <iostream>
//using namespace std;
//
//int fibonacci(int n);
//int main()
//{
//	int n;
//	while (1)
//	{
//		cin >> n;
//		if (n < 0 || 20 < n)
//		{
//
//			cout << "범위초과 다시입력: ";
//			continue;
//		}
//		else
//		{
//			cout << fibonacci(n);
//			break;
//		}
//	}
//	
//}
//
//int fibonacci(int n)
//{
//	int result = 0;
//	
//	if (2 <= n)
//	{
//		result = fibonacci(n - 1) + fibonacci(n - 2);
//	}
//	else if (n == 1) return 1;
//	else if (n == 0) return 0;
//
//	return result;
//}