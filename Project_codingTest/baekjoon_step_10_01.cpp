//#include<stdio.h>
//#include<iostream>
//#include<queue>
//
//using namespace std;
//
//void func(priority_queue<int> &que, int num);
//int main() 
//{
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    priority_queue<int> que; // int�� �켱���� ť ����
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
//void func(priority_queue<int> &que, int num)
//{
//    if (num == 0) // �ִ� ��� ����
//    {
//        // ������� ��� 0
//        if (que.empty())
//        {
//            cout << 0 << endl;
//        }
//        // �ƴҰ�� ���� �� ���, pop
//        else
//        {
//            cout << que.top() << endl;
//            que.pop();
//        }
//    }
//    // �Է� ����
//    else
//    {
//        que.push(num);
//    }
//}