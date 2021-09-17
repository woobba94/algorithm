//#include <bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	bool isVisit[26] = {};
//	string word;
//	int k;
//	cin >> word >> k;
//	vector<bool>result;
//	int wordSize = word.length();
//
//	if (wordSize == 1)
//	{
//		cout << 1;
//		return 0;
//	}
//
//	// 소문자로 세팅
//	for (int i = 0; i < wordSize; i++)
//	{
//		if (word[i] < 97)
//			word[i] += ('a' - 'A');
//	}
//
//	int count = 1;
//	char target = word[0];
//
//	for (int i = 1; i < wordSize; i++)
//	{
//		if (isVisit[target - 'a'])
//		{
//			target = word[i];
//			continue;
//		}
//
//		if (target == word[i])
//			count++;
//		else
//		{
//			isVisit[target - 'a'] = true;
//
//			if (count >= k)
//				result.push_back(1);
//			else 
//				result.push_back(0);
//
//			target = word[i];
//			count = 1;
//		}
//	}
//
//	// 마지막 target 의 count 검사
//	if (!isVisit[target - 'a'])
//	{
//		if (count >= k)
//			result.push_back(1);
//		else
//			result.push_back(0);
//	}
//
//	int resultSize = result.size();
//	for (int i = 0; i < resultSize; i++)
//	{
//		cout << result[i];
//	}
//}