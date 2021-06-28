//#include <iostream>
//#include <vector>
//#include<algorithm>
//using namespace std;
//
//void func(int target, int min, int max);
//int main()
//{
//	int n = 0, m = 0;
//	vector <int> numbers(n);
//	vector <int> serchNums(m);
//	
//	cin >> n;
//	while (n--)
//	{
//		int x;
//		cin >> x;
//		numbers.push_back(x);
//	}
//	sort(numbers.begin(), numbers.end());
//	cin >> m;
//	while (m--)
//	{
//		int x;
//		cin >> x;
//		serchNums.push_back(x);
//	}
//	for (int i = 0; i < serchNums.size(); i++)
//	{
//		func(serchNums[i], numbers.front(), numbers.back());
//	}
//}
//
//void func(int target, int min, int max)
//{
//	while (min <= max)
//	{
//		int mid = (min + max) / 2; // mid 갱신
//		if (mid == target) // 중간값이 target이면
//		{
//			cout << 1 << "\n";
//			return;
//		}
//		else if (mid > target) // 중간값이 target보다 크면
//		{
//			max = mid - 1;
//		}
//		else
//		{
//			min = mid + 1;
//		}
//	}
//	cout << 0 << "\n";
//	return;
//}