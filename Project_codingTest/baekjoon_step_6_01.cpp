#include <iostream>
#include <vector>
using namespace std;

int fibonacci(int n, int& zeroCount, int& oneCount);
int main()
{
    int n, zeroCount = 0, oneCount = 0;
    cin >> n;
    vector<int> numbers(n, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

}



int fibonacci(int n, int &zeroCount, int &oneCount) 
{
    if (n == 0) 
    {
        printf("0");
        zeroCount++;
        return 0;
    }
    else if (n == 1) 
    {
        printf("1");
        oneCount++;
        return 1;
    }
    else 
    {
        return (fibonacci(n-1, zeroCount, oneCount)
              + fibonacci(n-1, zeroCount, oneCount));
    }
}