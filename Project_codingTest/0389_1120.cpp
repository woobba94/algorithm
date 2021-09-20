//#include <bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	string a, b;
//
//	cin >> a >> b;
//
//	int aSize = a.length();
//	int bSize = b.length();
//	
//	int minDistance = aSize; // 모두 다르다고 가정
//	
//	for(int i = 0 ; i < bSize; i++)
//	{
//		int index = i;
//		if (i + aSize > bSize) break;
//		int distance = 0;
//		for (int j = 0; j < aSize; j++)
//		{
//			if (bSize <= index) break;
//			if (a[j] != b[index])
//			{
//				distance++;
//			}
//			index++;
//		}
//
//		if (minDistance > distance)
//		{
//			minDistance = distance;
//		}
//	}
//	cout << minDistance;
//	
//}