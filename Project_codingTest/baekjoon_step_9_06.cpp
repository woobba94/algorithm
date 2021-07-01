//#include <iostream>
//#include <vector>
//#include <stack>
//
//using namespace std;
//
//void func(vector <int> vec, vector <int>& result, stack <int> num);
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	int n;
//	cin >> n;
//
//	stack <int> num;	
//	vector <int> vec;
//	vector <int> result(n, -1);
//
//	// 입력받기
//	for (int i = 0; i < n; i++) {
//		int temp = 0;
//		cin >> temp;
//		vec.push_back(temp);
//	}
//	
//	func(vec, result, num);
//
//	for (int i = 0; i < result.size(); i++)
//	{
//		cout << result[i] << " ";
//	}
//	cout << endl;
//}
//
//void func(vector <int> vec, vector <int>& result, stack <int> num)
//{
//	for (int i = 0; i < vec.size(); i++) 
//	{
//		// 스택이 비어있지 않고 && vec[현재 저장된 인덱스] < vec[i] 이면
//		while (num.empty() == false && vec[num.top()] < vec[i])
//		{
//			// 저장된 인덱스에다가 vec[i] 값을 넣음
//			result[num.top()] = vec[i];
//			// pop으로 날림
//			num.pop();
//		}
//		// 다음 인덱스 넣음
//		num.push(i);
//	}
//}