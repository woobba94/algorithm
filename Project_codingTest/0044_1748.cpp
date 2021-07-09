//#include<iostream>
//
//using namespace std;
//
//int main() 
//{
//
//    int n = 0;
//    int count = 0;
//
//    cin >> n;
//
//    // n 이 한자리수 -> 자리수 = n까지 + 1
//    // n 이 두자리수 -> 자리수 = n이 9 일 때 까지 +1 , 10부터 + 2
//    // i 는 자리수를 의미
//    for (int i = 1; i <= n; i *= 10)
//    {
//        count += n - i + 1;
//    }
//        
//    cout << count;
//}