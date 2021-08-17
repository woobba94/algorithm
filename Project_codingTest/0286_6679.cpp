//#include <iostream> 
//using namespace std;
//
//int getSum10(int num);
//int getSum12(int num);
//int getSum16(int num);
//int main()
//{
//    for (int i = 1000; i < 10000; ++i)
//    {
//        if (getSum10(i) == getSum12(i) && getSum12(i) == getSum16(i))
//            cout << i << endl;
//    }
//}
//
//int getSum10(int num)
//{
//    int sum = 0;
//    while (num)
//    {
//        sum += num % 10;
//        num /= 10;
//    }
//    return sum;
//}
//
//int getSum12(int num)
//{
//    int sum = 0;
//    while (num)
//    {
//        sum += num % 12;
//        num /= 12;
//    }
//    return sum;
//}
//
//int getSum16(int num)
//{
//    int sum = 0;
//    while (num)
//    {
//        sum += num % 16;
//        num /= 16;
//    }
//    return sum;
//}
