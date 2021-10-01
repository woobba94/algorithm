//#include <bits/stdc++.h>
//using namespace std;
//
//bool isVisit[201][201];
//string A, B, C;
//bool dfs(int indexA, int indexB, int indexC);
//
//int main()
//{
//	int caseNum;
//	cin >> caseNum;
//
//	for (int t = 1; t <= caseNum; t++)
//	{
//		memset(isVisit, false, sizeof(isVisit));
//		cin >> A >> B >> C;
//		cout << "Data set " << t << ":" << (dfs(0, 0, 0) ? " yes\n" : " no\n");
//	}
//}
//
//bool dfs(int indexA, int indexB, int indexC)
//{
//	if (indexC == C.length()) return true;
//
//	if (isVisit[indexA][indexB])
//		return false;
//
//	isVisit[indexA][indexB] = true;
//
//	if (A[indexA] == C[indexC] && B[indexB] == C[indexC])
//	{
//		return (dfs(indexA + 1, indexB, indexC + 1) ||
//			dfs(indexA, indexB + 1, indexC + 1));
//	}
//	else if (A[indexA] == C[indexC])
//	{
//		return dfs(indexA + 1, indexB, indexC + 1);
//	}
//	else if (B[indexB] == C[indexC])
//	{
//		return dfs(indexA, indexB + 1, indexC + 1);
//	}
//	else return false;
//}