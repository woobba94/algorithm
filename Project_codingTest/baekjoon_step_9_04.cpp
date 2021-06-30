//#include <iostream>
//#include <string>
//#include <stack>
//
//using namespace std;
//
//int main() 
//{
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	while (1) 
//	{
//		string input;
//		getline(cin, input);
//		// 점하나로 이루어진 문자열이면
//		if (input.size() == 1 && input[0] == '.') break;
//
//		stack<char> st;
//		string result = "YES";
//		//  문자열에서 ()[]. 를 찾음
//		for (int i = 0; i < input.length(); i++)
//		{
//			//  ( 또는 [ 들어옴 -> 푸시
//			if (input[i] == '(' || input[i] == '[')
//			{
//				st.push(input[i]);
//			}
//			//  ) 들어옴 -> ( 와 짝이 맞는지 확인하고 팝
//			//  스택이 비어있지않고 && 들어온 것이 ) 이고 && 가장 위에있는것이 ( 일때 => pop
//			else if (st.empty() == false && input[i] == ')' && st.top() == '(')
//			{
//				st.pop();
//			}
//			else if (st.empty() == false && input[i] == ']' && st.top() == '[')
//			{
//				st.pop();
//			}
//		}
//		// 짝 맞는거 다 내보냈으면 남는게 없어야함.
//		// -> st.empty() == true 이면 짝이 맞은것.
//		if (st.empty() == false) result = "NO";
//
//		cout << result << endl;
//		
//	}
//	return 0;
//}