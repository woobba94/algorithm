//#include <iostream>
//#include <vector>
//#include <stack>
//
//using namespace std;
//
//void func(vector <int> vec, vector <int>& result, stack <int> num);
//int main() 
//{
//    int n = 0;
//    cin >> n;
//    vector <int> vec(n);
//    vector <int> result(n, 0);
//
//    stack <int> num;
//
//
//    for (int i = 0; i < n; i++)
//    {
//        int temp = 0;
//        cin >> temp;
//        vec.push_back(temp);
//    }
//
//    func(vec, result, num);
//    for (int i = 0; i < result.size(); i++)
//    {
//        cout << result[i] << " ";
//    }
//
//
//
//    return 0;
//}
//
//
//void func(vector <int> vec, vector <int> &result, stack <int> num)
//{
//    bool isFind = false;
//
//    for (int i = 0; i < vec.size(); i++)
//    {
//        isFind == false;
//        for (int j = 0; j < vec.size() - 1; j++)
//        {
//            if (isFind == false)
//            {
//                if (vec[j] < vec[j + 1])
//                {
//                    isFind = true;
//                    result[i] = vec[j + 1];
//                    break;
//                }
//            }
//        }
//    }
//}