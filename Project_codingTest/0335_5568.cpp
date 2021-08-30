//#include <iostream>
//#include <vector>
//using namespace std;
//int n, k;
//string arr[10];
//bool visited[10];
//int rCount = 0;
//vector <string> result;
//string made;
//void dfs(int depth);
//int main()
//{
//	cin >> n >> k;
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//	dfs(0);
//
//	cout << rCount;
//}
//
//void dfs(int depth) 
//{
//	if (depth == k) 
//	{
//		for (int i = 0; i < result.size(); i++)
//		{
//			if (made == result[i]) return;
//		}
//		result.push_back(made);
//		rCount++;
//		return;
//	}
//	else
//	{
//		for (int i = 0; i < n; i++)
//		{
//			if (visited[i]) continue;
//			visited[i] = true;
//			string temp = made;
//			made += arr[i];
//			dfs(depth + 1);
//			made = temp;
//			visited[i] = false;
//		}
//	}
//}