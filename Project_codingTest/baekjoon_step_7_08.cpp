//#include <iostream>
//#include <vector>
//using namespace std;
//
////out of range 고쳐야 함.
//
//const int MAX_SIZE = 100;
//void matrixCal(vector <vector <int>>& matrixA, vector <vector <int>>& matrixB, vector <vector <int>>& result, int N, int M, int K);
//
//int main()
//{
// 	ios::sync_with_stdio(false);
//	cin.tie(0);
//    vector <vector <int>> matrixA(MAX_SIZE);
//    vector <vector <int>> matrixB(MAX_SIZE);
//    vector <vector <int>> result(MAX_SIZE);
//    
//    int N, M, K; // a(n, m), b(m, k)
//
//    cin >> N >> M;
//
//    for (int i = 0; i < N; i++)
//    {
//        for (int j = 0; j < M; j++)
//        {
//            int input = 0;
//            cin >> input;
//            matrixA[i].push_back(input);
//        }
//    }
//    cin >> M >> K;
//    for (int i = 0; i < M; i++)
//    {
//        for (int j = 0; j < K; j++)
//        {
//            int input = 0;
//            cin >> input;
//            matrixB[i].push_back(input);
//        }
//    }
//    matrixCal(matrixA, matrixB, result, N, M, K);
//}
//
//void matrixCal(vector <vector <int>>& matrixA, vector <vector <int>>& matrixB, vector <vector <int>> &result, int N, int M, int K)
//{
//
//    for (int i = 0; i < N; i++)
//    {
//        for (int j = 0; j < K; j++)
//        {
//            for (int k = 0; k < M; k++)
//            {
//                result[i][j] += (matrixA[i][k] * matrixB[k][j]);
//            }
//        }
//    }
//
//    for (int i = 0; i < N; i++)
//    {
//        for (int j = 0; j < K; j++)
//        {
//            cout << result[i][j] << " ";
//        }
//        cout << endl;
//    }
//
//}