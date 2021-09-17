////#include <bits/stdc++.h>
////using namespace std;
////string A, P;
////string result;
////bool check();
////int main()
////{
////	cin >> A >> P;
////	result = P;
////	char k = P[0];
////	bool flag = false;
////	while (1)
////	{
////		if (k == '0')
////			flag = true;
////
////		if(k == '9')
////			flag = false;
////
////		if (flag) k++;
////		else k--;
////		result += k;
////
////		if (check())
////		{
////			result = P;
////			break;
////		}
////	}
////
////	cout << result;
////}
////
////bool check()
////{
////	int count = 0;
////	for (int i = 0; i < P.length(); i++)
////	{
////		for (int j = 0; j < result.length(); j++)
////		{
////			if (A[i] == result[j])
////				count++;
////			else count = 0;
////
////			if (count == P.length()) return false;
////		}
////	}
////	return true;
////}
//
//#include <bits/stdc++.h>
//using namespace std;
//int main()
//{
//	string A, P;
//	cin >> A >> P;
//	cout << P;
//}