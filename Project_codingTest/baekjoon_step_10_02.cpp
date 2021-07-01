//#include<stdio.h>
//#include<iostream>
//#include<queue>
//
//using namespace std;
//
//void func(priority_queue<int, vector<int>, greater<int>>&que, int num);
//int main() 
//{
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    priority_queue<int, vector<int>, greater<int>> que; // int형 우선순위 큐 선언
//    int n;
//    cin >> n;
//    while (n--) 
//    { 
//        int x;
//        cin >> x;
//        func(que, x);
//    }
//    return 0;
//}
//
//void func(priority_queue<int, vector<int>, greater<int>>&que, int num)
//{
//    if (num == 0) // 최댓값 출력 명령
//    {
//        // 비어있을 경우 0
//        if (que.empty())
//        {
//            cout << 0 << endl;
//        }
//        // 아닐경우 가장 위 출력, pop
//        else
//        {
//            cout << que.top() << endl;
//            que.pop();
//        }
//    }
//    // 입력 명령
//    else
//    {
//        que.push(num);
//    }
//}