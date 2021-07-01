//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//void func(vector <int> vec, vector <int>& result);
//int main()
//{
// 	ios::sync_with_stdio(false);
//	cin.tie(0);
//	int n = 0;
//	cin >> n;
//	vector <int> vec;
//	vector <int> result(n, -1);
//
//	while (n--)
//	{
//		int temp = 0;
//		cin >> temp;
//		vec.push_back(temp);
//	}
//
//	func(vec, result);
//	for (int i = 0; i < result.size(); i++)
//	{
//		cout << result[i] << " ";
//	}
//}
//
//void func(vector <int> vec, vector <int>& result)
//{
//	bool isFind = false;
//
//	for (int i = 0; i < vec.size(); i++)
//	{
//		isFind = false;
//		for (int j = i; j < vec.size() - 1; j++)
//		{
//			if (isFind == false)
//			{
//				if (vec[i] < vec[j + 1])
//				{
//					isFind = true;
//					result[i] = vec[j + 1];
//					break;
//				}
//			}
//		}
//	}
//}