//#include <iostream>
//#include <deque>
//#include <algorithm>
//using namespace std;
//
//int main(void) 
//{
//    ios::sync_with_stdio(0); 
//    cin.tie(0);
//
//    string A, T;
//    cin >> A >> T;
//
//    string reverseA = A;
//    reverse(reverseA.begin(), reverseA.end());
//
//    int leftIndex, rightIndex;
//    leftIndex = 0;
//    rightIndex = T.length() - 1;
//
//    deque <char> left, right;
//
//    bool flag = true;
//    bool leftRun = true;
//    while (leftIndex <= rightIndex)
//    {
//        if (leftRun)
//        {
//            left.push_back(T[leftIndex]);
//            leftIndex++;
//
//            if (left.size() >= reverseA.length())
//            {
//                flag = true;
//                for (int i = 0; i < reverseA.length(); i++)
//                {
//                    if (reverseA[i] != left[left.size() - 1 - i])
//                    {
//                        flag = false;
//                        break;
//                    }
//                }
//                if (flag)
//                {
//                    for (int i = 0; i < reverseA.length(); i++)
//                        left.pop_back();
//                    leftRun = false;
//                }
//            }
//        }
//        else 
//        {
//            right.push_back(T[rightIndex]);
//            rightIndex--;
//
//            if (right.size() >= reverseA.length())
//            {
//                flag = true;
//                for (int i = 0; i < A.length(); i++) 
//                {
//                    if (A[i] != right[right.size() - 1 - i]) 
//                    {
//                        flag = false;
//                        break;
//                    }
//                }
//                if (flag)
//                {
//                    for (int i = 0; i < A.length(); i++)
//                        right.pop_back();
//                    leftRun = true;
//                }
//            }
//        }
//    }
//
//    while (!left.empty()) 
//    {
//        right.push_back(left.back()); 
//        left.pop_back();
//        if (right.size() >= reverseA.length())
//        {
//            flag = true;
//            for (int i = 0; i < A.length(); i++) 
//            {
//                if (A[i] != right[right.size() - 1 - i]) 
//                {
//                    flag = false;
//                    break;
//                }
//            }
//            if (flag)
//            {
//                for (int i = 0; i < A.length(); i++)
//                    right.pop_back();
//            }
//        }
//    }
//
//    for (int i = right.size() - 1; i >= 0; i--)
//    {
//        cout << right[i];
//    }
//}