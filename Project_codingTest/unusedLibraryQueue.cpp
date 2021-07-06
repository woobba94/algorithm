//#include <iostream>
//
//using namespace std;
//class Node
//{
//public:
//    int data; // 저장될 데이터
//    Node* next; // 다음 변수 가르키는 포인터
//
//    Node()
//    {
//        this->data = 0;
//        next = NULL;
//    }
//};
//
//// 노드들을 담을 큐 클래스
//class Queue
//{
//private:
//    int size;
//    Node* rear, * front;
//
//public:
//    Queue()
//    {
//        this->size = 0;
//        rear = front = NULL;
//    }
//
//    // 뒤에 삽입
//    void push(int value)
//    {
//        Node* newNode = new Node;
//        newNode->data = value;
//        newNode->next = NULL;
//
//        // 비어있으면 rear와 front를 노드로 재설정
//        if (empty())
//        {
//            rear = front = newNode;
//        }
//        else
//        {
//            // 새로운 노드를 rear 다음으로 연결
//            rear->next = newNode;
//            rear = newNode;
//        }
//        this->size++;
//    }
//
//    // 앞에 삽입
//    int pop()
//    {
//        if (empty())
//        {
//            cout << "< is empty >" << endl;
//            return;
//        }
//
//        // 반환할 데이터를 임시데이터에 저장
//        int tempFrontData = front->data;
//        // 현재 프론트 저장
//        Node* tempFrontNode = front;
//        // 프론트 한칸 이동
//        front = front->next;
//        this->size--;
//
//        delete tempFrontNode;
//        return tempFrontData;
//    }
//
//    bool empty()
//    {
//        if (this->size == 0) return true;
//        return false;
//    }
//
//    int size()
//    {
//        // 저장된 사이즈 반환
//        return this->size;
//    }
//
//    int front()
//    {
//        return front->data;
//    }
//    void print()
//    {
//        if (empty()) return;
//
//        // 원래 위치 저장
//        Node* originFront = front;
//
//        // 프론트 한칸씩 옮기며 출력
//        for (int i = 0; i < this->size; i++)
//        {
//            cout << front->data << " ";
//            front = front->next;
//        }
//        // 원래 위치 다시 받기 (기존 구조 유지)
//        front = originFront;
//        cout << endl;
//    }
//};
//
//int main()
//{
//    Queue que;
//
//    que.push(5);
//    que.push(1);
//    que.push(3);
//
//    que.print();
//
//    cout << "front() : " << que.front() << endl;
//    cout << "size() : " << que.size() << endl;
//
//    cout << "pop() : " << que.pop() << endl;
//    cout << "pop() : " << que.pop() << endl;
//    cout << "pop() : " << que.pop() << endl;
//    cout << "pop() : " << que.pop() << endl;
//
//    que.print();
//}
