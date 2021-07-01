//#include <stdio.h>
//#include <iostream>
//#include <queue>
//#include <vector>
//
//using namespace std;
//
//
//struct comp {
//    bool operator()(int x, int y)
//    {
//        if (abs(x) == abs(y)) // 절댓값 같으면 
//        {
//            return x > y;
//        }
//        else
//        {
//            return abs(x) > abs(y);
//        }
//    }
//};
//void func(priority_queue<int, vector<int>, comp>& que, int num);
//
//int main() 
//{
//    
//
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    priority_queue <int, vector<int>, comp> que; // int형 우선순위 큐 선언
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
//void func(priority_queue <int, vector<int>, comp> &que, int num)
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