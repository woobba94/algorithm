//#include <iostream>
//#include <vector>
//using namespace std;
//
//void func(vector <int> numbers, vector <int>& serchNums);
//int main()
//{
//	int n = 0, m = 0;
//	vector <int> numbers;
//	vector <int> serchNums;
//	
//	cin >> n;
//	while (n--)
//	{
//		int x;
//		cin >> x;
//		numbers.push_back(x);
//	}
//
//	cin >> m;
//	while (m--)
//	{
//		int x;
//		cin >> x;
//		serchNums.push_back(x);
//	}
//	func(numbers, serchNums);
//}
//
//void func(vector <int> numbers, vector <int>& serchNums)
//{
//	bool flag = false;
//	for (int i = 0; i < numbers.size(); i++)
//	{
//		for (int j = 0; j < serchNums.size(); j++)
//		{
//			if (numbers[j] == serchNums[i])
//			{
//				flag = true;
//			}
//			else if(flag != true)
//			{
//				flag = false;
//			}
//		}
//
//		if (flag == true)
//		{
//			cout << 1 << "\n";
//			flag = false;
//		}
//		else cout << 0 << "\n";
//	}
//}