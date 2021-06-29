//#include <iostream>
//#include <vector>
//using namespace std;
//
//void func(int n, int m, vector <int> vec, vector <bool> isVisited, int cnt);
//int main() 
//{
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    int n, m;
//    vector <int> vec(9, 0);
//    vector <bool> isVisited(9, 0);
//
//    cin >> n >> m;
//
//    func(n, m, vec, isVisited, 0);
//
//}
//
//void func(int n, int m, vector <int> vec, vector <bool> isVisited, int cnt)
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
//    for (int i = 1; i <= n; i++) 
//    {
//        if (!isVisited[i]) 
//        {
//            isVisited[i] = true;
//            vec[cnt] = i;
//            func(n, m, vec, isVisited, cnt + 1);
//            isVisited[i] = false;
//        }
//    }
//}
