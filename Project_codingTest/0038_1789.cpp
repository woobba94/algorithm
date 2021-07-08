//#include <iostream>
//using namespace std;
//int getCount(unsigned int bigNum);
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	int numCount = 0;
//
//	unsigned int s = 1; // 1 ¡Â S ¡Â 4,294,967,295
//
//	cin >> s;
//
//	cout << getCount(s) << endl;
//}
//
//int getCount(unsigned int bigNum)
//{
//	int count = 0;
//	long long sum = 0;
//	int i = 1;
//	while (true)
//	{
//		sum += i;
//		if (bigNum < sum) break;
//
//		count++;
//		i++;
//	}
//	return count;
//}