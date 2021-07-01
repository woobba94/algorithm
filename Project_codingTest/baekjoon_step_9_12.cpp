//#include <iostream>
//#include <deque>
//
//using namespace std;
//
//void func(deque <pair<int, int>> &que, int num, int &count);
//void moveLeft(deque <int>& que);
//void moveRight(deque <int>& que);
//int main()
//{
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//
//    int n, m, count = 0;
//    cin >> n >> m;
//    deque <pair<int, int>> que; // 정수형 deque 선언. 
//    // 큐 값 초기화 1~n
//    for (int i = 1; i <= n; i++)
//    {
//        pair<int, int> temp = { i, i - 1 };
//        que.push_back(temp);
//    }
//    for (int i = 0; i < m; i++)
//    {
//        int num;
//        cin >> num;
//        func(que, num, count);
//    }
//    cout << count;
//}
//void moveLeft(deque <pair<int, int>> &que)
//{
//    que.push_back(que.front());
//    que.pop_front();
//    // back 빼고 인덱스 -1
//    for (int i = 0; i < que.size() - 1; i++)
//    {
//        que[i].second--;
//    }
//    que.back().second = que.size() - 1;
//}
//
//void moveRight(deque <pair<int, int>> &que)
//{
//    que.push_front(que.back());
//    que.pop_back();
//    // front 빼고 인덱스 +1
//    for (int i = 1; i < que.size(); i++)
//    {
//        que[i].second++;
//    }
//    que.front().second = 0;
//}
//
//void func(deque <pair<int, int>> &que, int num, int &count)
//{
//    bool flag = false; // 인덱스 도출 여부
//    bool leftFlag = false;
//    while (true)
//    {
//        // 가장 앞이면 count 그대로
//        // pop하면 인덱스 전부 -1
//        // -> 왼쪽으로 옮긴 후 젤 뒤에거 pop
//        if (num == que.front().first)
//        {
//            moveLeft(que);
//            que.pop_back();
//            return;
//        }
//        // 입력 수의 인덱스 찾기
//        // 숫자마다 한번만 실행
//        int index = 0;
//        if (flag == false)
//        {
//            
//            for (int i = 0; i < que.size(); i++)
//            {
//                if (que.at(i).first == num)
//                {
//                    index = que.at(i).second;
//                    flag = true;
//                    break;
//                }
//            }
//            // 중앙기준 왼쪽이면 왼쪽으로 이동준비
//            if (index <= que.size() / 2)
//            {
//                leftFlag = true;
//            }
//        }
//        if (leftFlag == true)
//        {
//            moveLeft(que);
//            count++;
//        }
//        else
//        {
//            moveRight(que);
//            count++;
//        }
//    }
//}