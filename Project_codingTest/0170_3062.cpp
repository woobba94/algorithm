//#include <iostream>
//using namespace std;
//
//int reverse(int num);
//int getLength(int num);
//bool isMirroring(int num);
//int main()
//{
//	int t;
//	cin >> t;
//	int n;
//	while (t--)
//	{
//		cin >> n;
//		int sum = n + reverse(n);
//
//		if (isMirroring(sum))
//			cout << "YES" << endl;
//		else
//			cout << "NO" << endl;
//
//	}
//
//}
//bool isMirroring(int num)
//{
//	char arr[7] = {};
//	int len = getLength(num);
//
//	for (int i = len - 1; i >= 0; i--)
//	{
//		arr[i] = num % 10;
//		num /= 10;
//	}
//	int j = len - 1;
//	for (int i = 0; i < len / 2; i++)
//	{
//		if (arr[i] != arr[j])
//		{
//			return false;
//		}
//		j--;
//	}
//
//	return true;
//}
//
//int getLength(int num)
//{
//	int k = 100;
//	int length = 2;
//	while (1)
//	{
//		if (num / k == 0)
//		{
//			break;
//		}
//		else
//		{
//			// ÀÚ¸®¼ö++
//			length++;
//			k *= 10;
//		}
//	}
//	return length;
//}
//
//int reverse(int num)
//{
//	int result = 0;
//
//	int len = getLength(num);
//	int k = 1;
//	len--;
//	while (len--)
//	{
//		k *= 10;
//	}
//
//	while (num)
//	{
//		result += (num % 10) * k;
//		k /= 10;
//		num /= 10;
//	}
//
//	return result;
//}