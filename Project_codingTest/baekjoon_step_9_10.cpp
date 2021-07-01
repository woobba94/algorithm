//#include <iostream>
//#include <deque>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//void func(deque <int> que, int n, int k);
//int main()
//{
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//
//    int n, k;
//    cin >> n >> k;
//
//    deque<int> que; // 정수형 큐 선언. 
//
//    for (int i = 1; i <= n; i++)
//    {
//        que.push_back(i);
//    }
//    cout << "<";
//    func(que, n, k);
//    cout << ">";
//    
//}
//
//void func(deque <int> que, int n, int k)
//{
//    while (true)
//    {
//        // 큐가 비어있으면 리턴
//        if (que.empty() == true) return;
//
//        for (int i = 0; i < k - 1; i++) 
//        {
//            que.push_back(que.front()); // 젤 앞에거 맨뒤로 푸시
//            que.pop_front(); // 젤 앞에거 팝
//        }
//
//        cout << que.front();
//        que.pop_front();
//
//        // 마지막 원소가 아니면
//        if (que.empty() == false)
//        {
//            cout << ", ";
//        }
//
//    }
//}