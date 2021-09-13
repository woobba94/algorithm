//#include <iostream>
//using namespace std;
//
//int facData[6] = {};
//int getFac(int k);
//int main()
//{
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//	int n;
//	for (int i = 1; i <= 5; i++)
//	{
//		facData[i] = getFac(i);
//	}
//	while(1)
//	{
//		int result = 0;
//		cin >> n;
//		if (!n) break;
//		int k = 1;
//		while (n)
//		{
//			result += n % 10 * facData[k];
//			n /= 10;
//			k++;
//		}
//		cout << result << '\n';
//	}
//
//	
//}
//
//int getFac(int k)
//{
//	int result = 1;
//	while (k)
//	{
//		result *= k;
//		k--;
//	}
//	return result;
//}