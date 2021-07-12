//#include <iostream>
//using namespace std;
//
//int k;
//int c;
//int numbers[14];
//int madeNum[7]; // 뽑은숫자
//void DFS(int node, int depth);
//
//int main()
//{
//
//    while (true)
//    {
//        cin >> k;
//
//        if (k == 0) break;
//
//        for (int i = 1; i <= k; i++)
//        {
//            cin >> numbers[i];
//        }
//
//        // 첫번째 노드 1, 깊이 1부터 시작
//        DFS(1, 1);
//
//
//        cout << endl;
//    }
//}
//
//// 깊이우선탐색
//void DFS(int node, int depth)
//{
//    if (depth == 7) // 끝까지 탐색하면 뽑은 숫자 출력
//    {
//        for (int i = 1; i <= 6; i++)
//        {
//            cout << madeNum[i] << " ";
//        }
//        cout << endl;
//        return;
//    }
//
//    // 단계 증가 -> node++, 깊이++
//    for (int i = node; i <= k; i++) // 모든 노드를 하나씩 찍으며 DFS
//    {
//        // 뽑은 숫자 저장
//        madeNum[depth] = numbers[i];
//        DFS(i + 1, depth + 1);
//    }
//
//}