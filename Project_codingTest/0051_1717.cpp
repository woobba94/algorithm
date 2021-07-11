//#include <iostream>
//
//using namespace std;
//
///*
//<find 함수>
//숫자를 받고 최종 부모를 찾음(재귀)
//ex) 7을 받으면 -> 5 -> 5의 부모검사 -> 2 -> 2의 부모검사 -> 1
//	=> 최종부모 1
//
//
//<union 함수>
//합연산 들어오면 최종부모를 비교하고(더 앞의 부모 비교) 갱신
//5의 부모 3, 7의 부모 5
//7 의 부모 3 으로 갱신
//
//	=> 5와 7은 부모가 3으로 같아짐 -> 같은 그래프 (같은 집합)
//
//*/
//
//void calcUnion(int* (&num), int a, int b);
//int getParent(int* num,int a);
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	int n, m;
//	cin >> n >> m;
//	int* num = new int[n + 1];
//
//	// 각 부모를 자기자신으로 초기화
//	for (int i = 0; i < n + 1; i++)
//	{
//		num[i] = i;
//	}
//
//	while (m--)
//	{
//		int t, a, b;
//		cin >> t >> a >> b;
//
//		if (t == 0)
//		{
//			calcUnion(num, a, b);
//		}
//		else
//		{
//			// 부모가 같으면 같은집합
//			if (getParent(num, a) == getParent(num, b)) cout << "YES\n";
//			else cout << "NO\n";
//		} 
//	}
//}
//
//// 부모를 합침
//void calcUnion(int* (&num), int a, int b)
//{
//	// 부모 가져오기
//	a = getParent(num, a);
//	b = getParent(num, b);
//
//	// 더 작은부모를 넘김
//	if (a < b) num[b] = a;
//	else num[a] = b;
//}
//
//// 최종 부모를 찾음
//int getParent(int* num, int a)
//{
//	// 부모가 자기자신 -> 종료
//	if (num[a] == a) return a;
//	
//	else
//	{
//		// 부모 = 부모의 부모
//		num[a] = getParent(num, num[a]);
//	}
//
//	return num[a];
//}