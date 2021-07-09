//#include <iostream>
//#include <vector>
//using namespace std;
//
//void setCheck(bool* (&check), int size);
//int main() 
//{
//    int n;
//    bool* check;
//    int* prime;
//
//    cin >> n;
//
//    check = new bool[n + 1];
//    prime = new int[n + 1];
//
//    setCheck(check, n);
//    
//    // n까지의 소수 모두 저장
//    int index = 0;
//    for (int i = 2; i < n + 1; i++)
//    {
//        if (check[i] == true)
//        {
//            prime[index] = i;
//            index++;
//        }
//    }
//
//    int count = 0, high = 0, low = 0, sum = 0;
//    while (1) 
//    {
//        // 합이 더 크면
//        if (n <= sum)
//        {
//            sum -= prime[low];
//            low++;
//        }
//        else if (high == index + 1) break;
//        else
//        {
//            sum += prime[high];
//            high++;
//        }
//
//        // 만들수있을때마다 경우의수 ++
//        if (sum == n) count++;
//    }
//    cout << count;
//}
//
//void setCheck(bool* (&check), int size)
//{
//    // check 초기화 
//    for (int i = 0; i <= size; i++)
//    {
//        check[i] = true;
//    }
//
//
//    // 에라토스테네스의 체(소수 구하기) 알고리즘
//    for (int i = 2; i * i <= size; i++)
//    {
//        if (check[i] == true)
//        {
//            // i 의 배수들 전부 false
//            for (int j = i + i; j <= size; j += i)
//                check[j] = false;
//        }
//    }
//}