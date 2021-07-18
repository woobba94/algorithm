//#include<iostream>
//
//using namespace std;
//bool isVPS(char str[]);
//class Stack
//{
//private:
//	int _indexPointer = 0;
//	char* _arr = new char[_indexPointer];
//
//public:
//    char top()
//	{
//		return _arr[_indexPointer - 1];
//	}
//	void push(char element)
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
//};
//
//int main(void) 
//{
//    int n;
//    cin >> n;
//
//    for (int i = 0; i < n; i++) 
//    {
//        char str[51];
//        cin >> str;
//
//        if (isVPS(str) == true)
//        {
//            cout << "YES" << endl;
//        }
//        else 
//        {
//            cout << "NO" << endl;
//        }
//    }
//}
//
//bool isVPS(char str[])
//{
//    // char 타입 stack 
//    Stack st;             
//
//    for (int i = 0; i < 51; i++) 
//    { 
//        if (str[i] == '\0') break;
//
//        // 여는 괄호 push
//        if (str[i] == '(') 
//        {
//            st.push(str[i]);    
//        }
//        // 닫는 괄호
//        else 
//        {   
//            //스택이 비어있지 않으면 pop
//            if (st.empty() == false) 
//            {    
//                st.pop();       
//            }
//            else 
//            {
//                return false;
//            }
//        }
//    }
//
//    if (st.empty() == false) return false;
//    else return true;
//}