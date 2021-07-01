//#include <iostream>
//#include <deque>
//#include <string>
//
//using namespace std;
//
//void func(deque <int> que, string str, int n);
//int main()
//{
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//
//    int n;
//    cin >> n;
//
//    deque <int> que; // 정수형 deque 선언. 
//    string str;
//
//    func(que, str, n);
//}
//
//void func(deque <int> que, string str, int n)
//{
//    for (int i = 0; i < n; i++) 
//    {
//        cin >> str;
//        // empty 명령어일때 
//        if (str == "empty")
//        {
//            // 큐가 비어있을때
//            if (que.empty())
//            {
//                cout << 1 << endl;
//            }
//            else
//            {
//                cout << 0 << endl;
//            }
//        }
//        // push_front 명령어 일때. 
//        else if (str == "push_front") 
//        { 
//            int num;
//            cin >> num;
//            que.push_front(num);
//        }
//        // push_back 명령어 일때. 
//        else if (str == "push_back")
//        {
//            int num;
//            cin >> num;
//            que.push_back(num);
//        }
//        // pop_front 명령어 일때. 
//        else if (str == "pop_front") 
//        {    
//            // 큐가 안비어있으면
//            if (que.empty() == false)
//            {
//                cout << que.front() << endl;
//                que.pop_front();
//            }
//            else 
//            {
//                cout << "-1" << endl;
//            }
//        }
//        // pop_back 명령어 일때. 
//        else if (str == "pop_back")
//        {
//            // 큐가 안비어있으면
//            if (que.empty() == false)
//            {
//                cout << que.back() << endl;
//                que.pop_back();
//            }
//            else
//            {
//                cout << "-1" << endl;
//            }
//        }
//        // size 명령어 일때
//        else if (str == "size") 
//        {       
//            cout << que.size() << endl;
//        }
//        // front 명령어 일때. 
//        else if (str == "front") 
//        {        
//            // 큐가 안비어있으면
//            if (que.empty() == false)
//            {
//                cout << que.front() << endl;
//            }
//            else 
//            {
//                cout << "-1" << endl;
//            }
//        }
//        // back 명령어 일때. 
//        else if (str == "back") {
//            // 큐가 안비어있으면
//            if (que.empty() == false)
//            {
//                cout << que.back() << endl;
//            }
//            else cout << -1 << endl;
//                
//        }
//    }
//}