//#include <iostream>
//#include <string>
//using namespace std;
//const int MAX_SIZE = 10001;
//class Stack
//{
//private:
//	int _indexPointer = -1;
//	int _arr[MAX_SIZE];
//
//public:
//
//	void push(int x)
//	{
//		_indexPointer++;
//		_arr[_indexPointer] = x;
//	}
//	int pop()
//	{
//		if (empty()) return -1;
//		return _arr[_indexPointer--];
//	}
//
//	int size()
//	{
//		return _indexPointer + 1;
//	}
//
//	bool empty()
//	{
//		if (_indexPointer == -1) return 1;
//		return 0;
//	}
//
//	int top()
//	{
//		if (empty()) return -1;
//		return _arr[_indexPointer];
//	}
//};
//
//int main()
//{
//	Stack st;
//	int testCase;
//	cin >> testCase;
//
//	while (testCase--)
//	{
//		int num;
//		string input;
//
//		cin >> input;
//
//		if (input == "push")
//		{
//			cin >> num;
//			st.push(num);
//		}
//		else if (input == "pop")
//		{
//			cout << st.pop() << endl;
//		}
//		else if (input == "size")
//		{
//			cout << st.size() << endl;
//		}
//		else if (input == "empty")
//		{
//			cout << st.empty() << endl;
//		}
//		else if (input == "top")
//		{
//			cout << st.top() << endl;
//		}
//	}
//
//}