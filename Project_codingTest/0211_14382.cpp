//#include <iostream>
//using namespace std;
//
//bool check[10] = {};
//bool isComplete(bool check[]);
//void calc(bool check[], int num);
//void clear(bool check[]);
//int main()
//{
//	int t;
//	cin >> t;
//
//	int n;
//	int count = 1;
//
//	while (t--)
//	{
//		cin >> n;
//		cout << "Case #" << count << ": ";
//		if (n == 0)
//			cout << "INSOMNIA" << endl;
//		else
//		{
//			int k = n;
//			while (1)
//			{
//				calc(check, n);
//				if (isComplete(check))
//				{
//					cout << n << endl;
//					break;
//				}
//				n += k;
//			}
//		}
//		clear(check);
//		count++;
//	}
//	
//	
//}
//void clear(bool check[])
//{
//	for (int i = 0; i < 10; i++)
//		check[i] = false;
//}
//
//bool isComplete(bool check[])
//{
//	for (int i = 0; i < 10; i++)
//	{
//		if (check[i] == false)
//			return false;
//	}
//	return true;
//}
//
//void calc(bool check[], int num)
//{
//	while (num)
//	{
//		check[num % 10] = true;
//		num /= 10;
//	}
//}