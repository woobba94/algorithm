//#include <iostream>
//#include <stack>
//
//using namespace std;
//
//void func(stack <int> st, int input, int n);
//
//int main()
//{
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    int n;
//    cin >> n;
//
//    stack<int> st; // 정수형 stack 선언. 
//    int input = 0;
//
//    func(st, input, n);
//}
//
//void func(stack <int> st, int input, int n)
//{
//    for (int i = 0; i < n; i++)
//    {
//        cin >> input;
//        // 0 입력 -> 팝
//        if (input == 0)
//        {
//            if (st.empty() == false) //지울 수 있는 수가 있음을 보장
//            {
//                st.pop();
//            }
//            else cout << "지울 수 있는 수가 없음. \n";
//            
//        }
//        // 0 이외의 수 
//        else
//        {
//            st.push(input);
//        }
//    }
//    int count = st.size();
//    int result = 0;
//    for (int i = 0; i < count; i++)
//    {
//        result += st.top();
//        st.pop();
//    }
//
//    cout << result;
//}