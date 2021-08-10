//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//bool compare(string a, string b)
//{
//	if (a.length() == b.length())
//	{
//		for (int i = 0; i < a.length(); i++)
//		{
//			if (a[i] != b[i])
//				return a[i] < b[i];
//		}
//	}
//	return a.length() < b.length();
//}
//int main()
//{
//	int n;
//	cin >> n;
//
//	vector<string> arr;
//	string input;
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> input;
//		arr.push_back(input);
//	}
//
//	sort(arr.begin(), arr.end(), compare);
//
//	for (int i = 0; i < n - 1; i++)
//	{
//		if (arr[i] == arr[i + 1])
//			arr[i] = "-1";
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		if (arr[i] != "-1")
//			cout << arr[i] << endl;
//	}
//}