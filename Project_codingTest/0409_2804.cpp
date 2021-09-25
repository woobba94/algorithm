//#include <bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	string A, B;
//	cin >> A >> B;
//	int Alen = A.length();
//	int Blen = B.length();
//	int Atarget = 0, Btarget = 0;
//
//	for (int i = 0; i < Alen; i++)
//	{
//		bool flag = false;
//		for (int j = 0; j < Blen; j++)
//		{
//			if (A[i] == B[j])
//			{
//				Atarget = i;
//				Btarget = j;
//				flag = true;
//				break;
//			}
//		}
//		if (flag) break;
//	}
//
//	for (int i = 0; i < Blen; i++)
//	{
//		for (int j = 0; j < Alen; j++)
//		{
//			if (j == Atarget) cout << B[i];
//			else if (i == Btarget) cout << A[j];
//			else cout << '.';
//		}
//		cout << endl;
//	}
//}