//#include <iostream>
//using namespace std;
//
//long long calc(int* arr, int size);
//int mainMonitor;  // 총감독 감시 수
//int subMonitor;    // 보조 감시 수
//int main()
//{
//
//    int n; // (1 ≤ N ≤ 1,000,000)
//    cin >> n;
//
//    int* arr = new int[n];
//
//    for (int i = 0; i < n; i++)
//    {
//        cin >> arr[i]; // (1 ≤ Ai ≤ 1,000,000)
//    }
//
//    cin >> mainMonitor;
//    cin >> subMonitor;
//
//    cout << calc(arr, n) << endl;
//
//}
//
//long long calc(int* arr, int size)
//{
//    long long count = 0;
//
//    for (int i = 0; i < size; i++)
//    {
//        // 총감독관은 무조건 1명필요
//        arr[i] -= mainMonitor;
//        count++;
//
//        // 아직 감시할 학생 남으면
//        if (0 < arr[i])
//        {
//
//            // 딱 맞는 경우
//            if (arr[i] % subMonitor == 0)
//            {
//                // 남은 인원 / 보조감독 감시 수
//                count += (arr[i] / subMonitor);
//            }
//            else
//            {
//                // 1명 더 추가
//                count += (arr[i] / subMonitor) + 1;
//            }
//        }
//    }
//    return count;
//}