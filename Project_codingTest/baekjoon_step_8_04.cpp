//#include <iostream>
//#include <vector>
//using namespace std;
//
//void func(int n, int m, vector <int> vec, int cnt, int newNum);
//int main() 
//{
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    int n, m;
//    vector <int> vec(9, 0);
//
//    cin >> n >> m;
//
//    func(n, m, vec, 0, 1);
//
//}
//
//void func(int n, int m, vector <int> vec, int cnt, int newNum)
//{
//    if (cnt == m) 
//    {
//        for (int i = 0; i < m; i++) 
//        {
//            cout << vec[i] << " ";
//        }
//        cout << "\n";
//        return;
//    }
//
//    for (int i = newNum; i <= n; i++)
//    {
//        vec[cnt] = i;
//        func(n, m, vec, cnt + 1, i);
//    }
//}
