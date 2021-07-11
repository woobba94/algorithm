//#include <iostream>
//
//using namespace std;
//
//class DeQueue
//{
//private:
//	int _backPointer = 0;
//	int* _arr = new int[_backPointer];
//
//public:
//
//	// 앞에 삽입
//	void push_pront(int element)
//	{
//		// 사이즈 확보
//		_backPointer++;
//
//		// 앞 자리 확보
//		for (int i = _backPointer; i >= 0; i--)
//		{
//			_arr[i] = _arr[i - 1];
//		}
//
//		_arr[0] = element;
//	}
//
//	// 뒤에 삽입
//	void push_back(int element)
//	{
//		_arr[_backPointer] = element;
//		_backPointer++;
//	}
//
//	// 앞 삭제
//	void pop_pront()
//	{
//		// 한칸씩 땡김
//		for (int i = 1; i < _backPointer; i++)
//		{
//			_arr[i - 1] = _arr[i];
//		}
//
//		// 사이즈 감소
//		_backPointer--;
//	}
//
//	// 뒤 삭제
//	void pop_back()
//	{
//		_backPointer--;
//	}
//
//	// 앞 원소 반환
//	int front()
//	{
//		return _arr[0];
//	}
//
//	// 뒤 원소 반환
//	int back()
//	{
//		return _arr[_backPointer - 1];
//	}
//
//	int size()
//	{
//		return _backPointer;
//	}
//
//	bool empty()
//	{
//		if (_backPointer == 0) return true;
//		else return false;
//	}
//};
//
//
//int main()
//{
//	DeQueue dq;
//
//	dq.push_back(2);
//	dq.push_pront(4);
//	// 4, 2
//	cout << dq.front() << endl; // 4
//	cout << dq.back() << endl; // 2
//
//	dq.pop_pront();
//	// 2
//	cout << dq.size() << endl; // 1
//	cout << dq.back() << endl; // 2
//	dq.push_pront(99);
//	// 99, 2
//	cout << dq.back() << endl; // 2
//	dq.push_back(77);
//	// 99, 2, 77
//	cout << dq.back() << endl; // 77
//
//	dq.pop_back();
//	dq.pop_back();
//	// 99
//	cout << dq.back() << endl; // 99 
//	cout << dq.front() << endl; // 99
//
//	cout << dq.size() << endl; // 1
//
//	dq.pop_pront();
//	cout << dq.size() << endl; // 0
//}