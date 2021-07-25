//#include <iostream>
//using namespace std;
//
//class Deque
//{
//private:
//	int _size = 0;
//	int _arr[1000];
//	int _index = 0;
//
//public:
//	void push_back(int num)
//	{
//		_arr[_index] = num;
//		_size++;
//		_index++;
//	}
//
//	void pop_front()
//	{
//		for (int i = 0; i < _size - 1; i++)
//		{
//			_arr[i] = _arr[i + 1];
//		}
//		_size--;
//		_index--;
//	}
//
//	int front()
//	{
//		return _arr[0];
//	}
//
//	int getSize()
//	{
//		return _size;
//	}
//};
//
//int main()
//{
//	int n;
//	cin >> n;
//	Deque arr;
//
//	for (int i = 0; i < n; i++)
//	{
//		arr.push_back(i + 1);
//	}
//
//	while (1)
//	{
//		cout << arr.front() << " ";
//		if (arr.getSize() == 1) break;
//		arr.pop_front();
//		arr.push_back(arr.front());
//		arr.pop_front();
//	}
//
//}