//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int MAX_SIZE = 200;
//
//
//string g_nCrArray[MAX_SIZE][MAX_SIZE];
//
//string setData(string str1, string str2);
//string calc(int n, int r);
//
//int main()
//{
//    int n, m;
//    cin >> n >> m;
//
//    cout << calc(n, m);
//}
//
//string setData(string str1, string str2)
//{
//    if (str1.length() > str2.length())
//    {
//        swap(str1, str2);
//    }
//    string tempStr = "";
//    int str1Length = str1.length();
//    int str2Length = str2.length();
//    int difLength = str2Length - str1Length;
//    int carry = 0;
//
//    for (int i = (str1Length - 1); i >= 0; i--)
//    {
//        int sum = (str1[i] - '0') + (str2[i + difLength] - '0') + carry;
//        tempStr.push_back(sum % 10 + '0');
//        carry = sum / 10;
//    }
//
//    for (int i = (difLength - 1); i >= 0; i--)
//    {
//        int sum = (str2[i] - '0') + carry;
//        tempStr.push_back(sum % 10 + '0');
//        carry = sum / 10;
//    }
//
//    if (carry)
//    {
//        tempStr.push_back(carry + '0');
//    }
//
//    reverse(tempStr.begin(), tempStr.end());
//
//    return tempStr;
//}
//
//
//string calc(int n, int r)
//{
//    if (n == r || r == 0)
//    {
//        g_nCrArray[n][r] = "1";
//        return "1";
//    }
//
//    if (g_nCrArray[n][r] != "")
//    {
//        return  g_nCrArray[n][r];
//    }
//    else
//    {
//        g_nCrArray[n - 1][r - 1] = calc(n - 1, r - 1);
//        g_nCrArray[n - 1][r] = calc(n - 1, r);
//        return setData(g_nCrArray[n - 1][r - 1], g_nCrArray[n - 1][r]);
//    }
//
//
//}