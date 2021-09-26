//#include <bits/stdc++.h>
//using namespace std;
//
//map <string, double> arr;
//int main()
//{
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//	string s;
//	int treeCount = 0;
//	while (getline(cin, s)) 
//	{
//		treeCount++;
//		arr[s]++;
//	}
//	cout << fixed;
//	cout.precision(4);
//	int size = arr.size();
//	for (map <string, double>::iterator it = arr.begin(); it != arr.end(); it++)
//	{
//		cout << it->first << " " 
//			 << ((it->second) / treeCount) * 100.0 << '\n';
//	}
//}