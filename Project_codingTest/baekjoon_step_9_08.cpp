//#include <iostream>
//#include <deque>
//#include <string>
//
//using namespace std;
//
//int func(deque <int> que, int n);
//int main()
//{
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    int n;
//    cin >> n;
//
//    deque<int> que; // 정수형 큐 선언.
//
//    cout << func(que, n);
//}
//
//int func(deque <int> que, int n)
//{
//    int result = -1;
//
//    // n부터 1까지 카드쌓음
//    for (int i = n; i > 0; i--)
//    {
//        que.push_back(i);
//    }
//
//
//    while (true)
//    {
//        // 카드가 없으면 리턴
//        if (que.empty() == true)
//        {
//            return result;
//        }
//        else
//        {
//            // 카드가 두장 이상일때
//            if (que.size() > 1)
//            {
//                // 위에 있는카드 버림
//                que.pop_back();
//                // 아래 위치에 위의 카드 복사
//                que.push_front(que.back());
//                // 위의 카드 버림
//                que.pop_back();
//            }
//            else
//            {
//                result = que.front();
//                return result;
//            }
//        }
//    }
//}