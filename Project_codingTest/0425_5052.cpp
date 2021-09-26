//#include <bits/stdc++.h>
//using namespace std;
//const int CHAR_SIZE = 10;
//
//class Trie
//{
//private:
//	Trie* child[CHAR_SIZE];
//	bool isFinish = false;
//
//public:
//	void insert(char *num)
//	{
//		if (*num == NULL) 
//		{
//			isFinish = true;
//			return;
//		}
//		int next = *num - '0';
//
//		// 자식노드가 비어있으면
//		if (child[next] == NULL)
//		{
//			child[next] = new Trie();
//		}
//		// num 의 주소값을 1 증가시킴
//		child[next]->insert(num + 1);
//	}
//
//	bool find(char *num) 
//	{
//		if (*num == NULL) return false;
//		if (isFinish) return true;
//
//		int next = *num - '0';
//
//		return child[next]->find(num + 1);
//	}
//};
//int main()
//{
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//	int t;
//	cin >> t;
//
//	while (t--)
//	{
//		Trie* tri = new Trie();
//		int n;
//		cin >> n;
//		char arr[10001][11];
//		for (int i = 0; i < n; i++)
//		{
//			cin >> arr[i];
//			tri->insert(arr[i]);
//		}
//
//		bool isFail = false;
//		for (int i = 0; i < n; i++)
//		{
//			// 찾으면
//			if (tri->find(arr[i])) 
//			{
//				isFail = true;
//				break;
//			}
//		}
//		if (isFail) cout << "NO\n";
//		else cout << "YES\n";
//	}
//}