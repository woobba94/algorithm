//#include <iostream>
//
//using namespace std;
//
//class Stack
//{
//	
//private:
//	int _indexPointer = 0;
//	int* _arr = new int[_indexPointer];
//
//public:
//	int top()
//	{
//		return _arr[_indexPointer - 1];
//	}
//	void push(int element)
//	{
//		_arr[_indexPointer] = element;
//		_indexPointer++;
//	}
//	void pop()
//	{
//		_indexPointer--;
//	}
//	bool empty()
//	{
//		if (_indexPointer == 0) return true;
//		return false;
//	}
//	int size()
//	{
//		return _indexPointer;
//	}
//	int test()
//	{
//		return _arr[5];
//	}
//
//
//};
//
//
//int main()
//{
//	Stack a;
//
//	a.push(1);
//	a.push(2);
//	a.push(3);
//	a.push(4);
//	a.push(5);
//	cout << a.size() << endl;
//	a.push(6);
//	cout << a.top() << endl;
//	a.pop();
//	cout << a.top() << endl;
//	a.pop();
//	a.pop();
//	a.pop();
//	cout << a.top() << endl;
//	a.pop();
//
//	if (a.empty() == true) cout << "empty" << endl;
//	else cout << "not empty"  << "top is " << a.top() << endl;
//
//}