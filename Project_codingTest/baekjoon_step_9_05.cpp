//#include <iostream>
//#include <vector>
//#include <stack>
//
//using namespace std;
//int main() 
//{
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//    int count = 0;
//    int n = 0, x, max = 0;
//    cin >> n;
//    // + 와 - 를 저장할 벡터
//    vector <char> vec(n * 2);
//
//    stack <int> num;
//    while (n--) 
//    {
//        cin >> x;
//        // 들어온 수가 max보다 크다면
//        if (x > max) 
//        {
//            // max 다음부터 x 까지 push
//            for (int i = max + 1; i <= x; i++) 
//            {
//                max = x; // max 값 갱신
//                num.push(i);
//                // push 했으니 + 저장
//                vec[count] = '+';
//                count++;
//            }
//        }
//        else
//        {
//            // 들어온 수가 max보다 작은데 top과 다르다면 불가능
//            if (num.top() != x)
//            {
//                cout << "NO";
//                return 0;
//            }
//        }
//        // pop 했으니 - 저장
//        num.pop();
//        vec[count] = '-';
//        count++;
//    }
//    for (int i = 0; i < count; i++)
//    {
//        cout << vec[i] << "\n";
//    }
//    return 0;
//}