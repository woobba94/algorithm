//#include <iostream>
//#include <vector>
//using namespace std;
//
//void fibonacci(int num, int index, int& zeroCount, int& oneCount);
//int main()
//{
//    int n;
//    
//    cin >> n;
//    vector<int> numbers(n, 0);
//    vector<int> zeroCount(n, 0);
//    vector<int> oneCount(n, 0);
//
//    for (int i = 0; i < n; i++)
//    {
//        cin >> numbers[i];
//        
//    }
//
//    for (int i = 0; i < n; i++)
//    {
//        fibonacci(numbers[i], i, zeroCount[i], oneCount[i]);
//    }
//
//    for (int i = 0; i < n; i++)
//    {
//        cout << zeroCount[i] << " " << oneCount[i] << endl;
//    }
//
//}
//
//void fibonacci(int num, int index, int &zeroCount, int &oneCount)
//{
//    if (num == 0)
//    {
//        zeroCount++;
//    }
//    else if (num == 1)
//    {
//        oneCount++;
//    }
//    else 
//    {
//        fibonacci(num - 1, index, zeroCount, oneCount);
//        fibonacci(num - 2, index, zeroCount, oneCount);
//    }
//}