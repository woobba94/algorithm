//#include <iostream>
//#include <cstring>
//#include <queue>
//#include <string>
//
//
//using namespace std;
//
//void setEratos(bool primeArr[]);
//int charToInt(string num);
//void bfs(int start);
//
//#define max_int 10001
//
//int n, start_node, end_node;
//bool primeArr[max_int] = {true, };
//int check[max_int] = {-1, };
//
//
//int main() 
//{
//    // dp 배열 채우기 (2~10000 까지 소수판별)
//    setEratos(primeArr);
//
//    cin >> n;
//
//    while (n--) 
//    {
//        cin >> start_node >> end_node;
//
//        // 3. BFS 수행
//        bfs(start_node);
//
//        // 4. 출력
//        // 1) 만약 목표 숫자로 도달 했다면 거리 출력
//        if (check[end_node] != -1) 
//        {
//            cout << check[end_node];
//        }
//        // 만들 수 없는 숫자라면
//        else 
//        {
//            cout << "Impossible" << endl;
//        }
//    }
//}
//
//
//// 에라토스테네스의 체
//void setEratos(bool primeArr[])
//{
//    for (int i = 2; i * i < max_int; i++) 
//    {
//        for (int j = i * i; j < max_int; j += i) 
//        {
//            // i의 배수 -> false
//            primeArr[j] = false;
//        }
//    }
//}
//
//// 4자리 문자 -> int 변환
//int charToInt(string num) 
//{
//    int result = 0;
//
//    for (int i = 0; i < 4; i++) 
//    {
//        result = result * 10 + (num[i] - '0');
//    }
//
//    return result;
//}
//
//// BFS 수행
//void bfs(int start) 
//{
//    int* que = new int[100];
//    int pointer = 0;
//    que[pointer] = start;
//
//    check[start] = 0;
//
//    while (!(que[0] == -1))
//    {
//        int node = que[pointer];
//        que[pointer] = -1;
//
//        // 맨 앞자리 부터 4자리 검사
//        for (int i = 0; i < 4; i++) 
//        {
//            char node_s[4];
//            for (int k = 0; k < 4; k++)
//            {
//                node_s[i] = to_string(node);
//            }
//                
//            // 모든 자리를 0~9로 변환해봅니다.
//            for (int j = 0; j < 10; j++) 
//            {
//                node_s[i] = j + '0';
//                int next = charToInt(node_s);
//                // 다음 이동하려는 숫자가 4자리 수이고, 소수이며, 방문하지 않았다면 큐에 넣어줍니다.
//                if (next >= 1000 && primeArr[next] == true && check[next] == -1) 
//                {
//                    check[next] = check[node] + 1;
//                    q.push(next);
//                }
//            }
//        }
//    }
//}