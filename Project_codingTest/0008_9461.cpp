//#include <iostream>
//using namespace std;
//
//int P(int N);
//int main() {
//    int T;
//    int N;
//    cin >> T;
//
//    for (int i = 0; i < T; i++)
//    {
//        cin >> N;
//        cout << P(N) << endl;
//    }
//}
//
//int P(int N)
//{
//    int arr[101] = { 0,1,1, };
//    if (N < 3)
//    {
//        return arr[N];
//    } 
//    else if (arr[N] == 0)
//    {
//        arr[N] = P(N - 2) + P(N - 3);
//    }
//    return arr[N];
//}