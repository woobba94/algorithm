//#include <iostream>
//using namespace std;
//class Stack
//{
//public:
//	int size = 100000;
//	int top = 0;
//	int* arr = new int[size];
//
//
//	void pop()
//	{
//		if(top != 0)
//			top--;
//	}
//	void push(int n)
//	{
//		arr[top] = n;
//		top++;
//	}
//};
//int main()
//{
//	int k;
//	cin >> k;
//	Stack s;
//
//	int input = 0;
//	int sum = 0;
//	for(int i = 0; i < k;i++)
//	{
//		cin >> input;
//		if (input == 0)
//		{
//			s.pop();
//		}
//		else
//		{
//			s.push(input);
//		}
//	}
//
//	for (int i = 0; i < s.top; i++)
//	{
//		sum += s.arr[i];
//	}
//
//	cout << sum;
//}