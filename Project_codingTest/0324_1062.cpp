//#include <iostream>
//using namespace std;
//
//int n, k, maxCount = 0;
//bool isLearn[26] = {};
//string arr[50];
//string setMidStr(string s);
//void DFS(int index, int count);
//void setIsLearn();
//void checkStr();
//int main()
//{
//	cin >> n >> k;
//	setIsLearn();
//	k -= 5;
//	
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//		arr[i] = setMidStr(arr[i]);
//	}
//	if (k < 0)
//	{
//		cout << 0;
//	}
//	else
//	{
//		DFS(0, 0);
//		cout << maxCount;
//	}
//}
//
//void checkStr()
//{
//	bool flag;
//	int learnCount = 0;
//	for (int i = 0; i < n; i++)
//	{
//		flag = true;
//		for (int j = 0; j < arr[i].length(); j++)
//		{
//			if (isLearn[arr[i][j] - 'a'] == false)
//			{
//				flag = false;
//				break;
//			}
//		}
//		if (flag == true)
//		{
//			learnCount++;
//		}
//	}
//	if (maxCount < learnCount)
//		maxCount = learnCount;
//}
//
//void DFS(int index, int count)
//{
//	if (count == k)
//	{
//		checkStr();
//		return;
//	}
//	for (int i = index; i < 26; i++)
//	{
//		if (isLearn[i] == false)
//		{
//			isLearn[i] = true;
//			DFS(i, count + 1);
//			isLearn[i] = false;
//		}
//	}
//}
//
//void setIsLearn()
//{
//	isLearn['a' - 'a'] = true;
//	isLearn['c' - 'a'] = true;
//	isLearn['i' - 'a'] = true;
//	isLearn['n' - 'a'] = true;
//	isLearn['t' - 'a'] = true;
//}
//
//string setMidStr(string s)
//{
//	string temp;
//	for (int i = 4; i < s.length() - 4; i++)
//	{
//		if (s[i] != 'a' &&
//			s[i] != 'c' &&
//			s[i] != 'i' &&
//			s[i] != 'n' &&
//			s[i] != 't')
//			temp.push_back(s[i]);
//	}
//	return temp;
//}