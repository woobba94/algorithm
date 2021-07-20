//#include <iostream>
//using namespace std;
//
//int getChange(int num, int root);
//int main()
//{
//	int a, b;
//	cin >> a >> b;
//
//	int min = getChange(a, 6) + getChange(b, 6);
//	int max = getChange(a, 5) + getChange(b, 5);
//
//	cout << min << " " << max;
//}
//
//int getChange(int num, int root)
//{
//	int i = 1;
//	int result = 0;
//	while (num)
//	{
//		// root : 5 or 6 
//		// 5를 넣으면 큰수로 6을 넣으면 작은수로 바꿈.
//		if (num % 10 == root)
//		{
//			if (root == 5)
//				result += 6 * i;
//			else
//				result += 5 * i;
//		}
//		else
//		{
//			result += (num % 10) * i;
//		}
//		num /= 10;
//		i *= 10;
//	}
//
//	return result;
//}