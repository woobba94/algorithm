//#include <bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	map <string, int> arr;
//	int n, m;
//	cin >> n >> m;
//	string name;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> name;
//		arr[name]++;
//	}
//
//	int count = 0;
//	for (int i = 0; i < m; i++)
//	{
//		cin >> name;
//		arr[name]++;
//		if (arr[name] == 2) count++;
//	}
//
//	cout << count << '\n';
//	for (auto iter = arr.begin(); iter != arr.end();)
//	{
//		if (iter->second == 2) cout << iter->first << '\n';
//		iter++;
//	}
//}