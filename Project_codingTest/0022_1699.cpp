//#include <iostream>
//using namespace std;
//
//void setData(int* data, int size);
//int getMin(int a, int b);
//int main() 
//{
//    int N;
//    cin >> N;
//    int* data = new int[N + 1];
//
//    for (int i = 1; i < N + 1; i++)
//    {
//        data[i] = i;
//    }
//    
//    setData(data, N + 1);
//    cout << data[N] << endl;
//
//}
//
//void setData(int* data, int size)
//{
//    for (int i = 2; i <= size; i++)
//    {
//        for (int j = 2; j * j <= i; j++)
//        {
//            //data[i] = data[i - 1] + 1;
//            data[i] = getMin(data[i], data[i - j * j] + 1);
//        }
//    }
//}
//
//int getMin(int a, int b)
//{
//    if (a > b) return b;
//    else return a;
//}